@class NSString, NSUUID, IXDataPromiseSeed, NSError;

@interface IXDataPromise : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long errorSourceIdentifier;
@property (retain, nonatomic) IXDataPromiseSeed *seed;
@property (readonly, nonatomic) Class seedClass;
@property (nonatomic, getter=isComplete) BOOL complete;
@property (nonatomic) double percentComplete;
@property (readonly, nonatomic) NSError *localError;
@property (readonly, nonatomic) BOOL localIsComplete;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long creatorIdentifier;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) unsigned long long totalBytesNeededOnDisk;
@property (readonly, nonatomic) NSError *errorOccurred;

+ (id)outstandingPromisesForCreator:(unsigned long long)a0;
+ (BOOL)promiseExists:(BOOL *)a0 withUUID:(id)a1 error:(id *)a2;

- (void)encodeWithCoder:(id)a0;
- (double)percentComplete;
- (id)initWithCoder:(id)a0;
- (id)initWithSeed:(id)a0;
- (void)setPercentComplete:(double)a0;
- (BOOL)resetWithError:(id *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)resetWithCompletion:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (id)name;
- (id)uniqueIdentifier;
- (BOOL)cancelForReason:(id)a0 client:(unsigned long long)a1 error:(id *)a2;
- (id)initWithName:(id)a0 client:(unsigned long long)a1 diskSpaceNeeded:(unsigned long long)a2;
- (void)preflightWithCompletion:(id /* block */)a0;
- (BOOL)localIsComplete;
- (oneway void)_clientDelegate_didCancelWithError:(id)a0 client:(unsigned long long)a1;
- (oneway void)_clientDelegate_didComplete;
- (void)_updateInitWithSeed:(id)a0 notifyDaemon:(BOOL)a1;
- (void)cancelForReason:(id)a0 client:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)cancelForReason:(id)a0 completion:(id /* block */)a1;
- (BOOL)cancelForReason:(id)a0 error:(id *)a1;
- (unsigned long long)creatorIdentifier;
- (id)localError;
- (BOOL)preflightWithError:(id *)a0;
- (unsigned long long)totalBytesNeededOnDisk;

@end
