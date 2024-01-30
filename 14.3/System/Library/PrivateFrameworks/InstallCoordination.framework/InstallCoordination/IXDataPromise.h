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

- (void).cxx_destruct;
- (BOOL)resetWithError:(id *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)uniqueIdentifier;
- (void)preflightWithCompletion:(id /* block */)a0;
- (id)description;
- (double)percentComplete;
- (BOOL)isEqual:(id)a0;
- (void)resetWithCompletion:(id /* block */)a0;
- (void)setPercentComplete:(double)a0;
- (id)name;
- (id)localError;
- (id)initWithSeed:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_updateInitWithSeed:(id)a0 notifyDaemon:(BOOL)a1;
- (BOOL)cancelForReason:(id)a0 client:(unsigned long long)a1 error:(id *)a2;
- (unsigned long long)creatorIdentifier;
- (oneway void)_clientDelegate_didComplete;
- (oneway void)_clientDelegate_didCancelWithError:(id)a0 client:(unsigned long long)a1;
- (id)initWithName:(id)a0 client:(unsigned long long)a1 diskSpaceNeeded:(unsigned long long)a2;
- (void)cancelForReason:(id)a0 client:(unsigned long long)a1 completion:(id /* block */)a2;
- (BOOL)localIsComplete;
- (unsigned long long)totalBytesNeededOnDisk;
- (void)cancelForReason:(id)a0 completion:(id /* block */)a1;
- (BOOL)cancelForReason:(id)a0 error:(id *)a1;
- (BOOL)preflightWithError:(id *)a0;

@end
