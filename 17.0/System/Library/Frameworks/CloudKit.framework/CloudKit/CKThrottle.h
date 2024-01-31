@class NSNumber, NSString, NSDate;

@interface CKThrottle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSNumber *throttleID;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *containerIdentifier;
@property (retain, nonatomic) NSNumber *databaseScope;
@property (copy, nonatomic) NSString *zoneName;
@property (retain, nonatomic) NSNumber *operationType;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *functionName;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *operationGroupNamePrefix;
@property (retain, nonatomic) NSDate *throttleStartDate;
@property (retain, nonatomic) NSNumber *intervalLengthSeconds;
@property (retain, nonatomic) NSNumber *repeatEverySeconds;
@property (retain, nonatomic) NSNumber *allowedRequestCount;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain) NSNumber *sentRequestCount;
@property (retain) NSNumber *currentRequestWindowIndex;
@property (retain, nonatomic) NSNumber *errorCode;
@property (retain, nonatomic) NSNumber *isServerThrottle;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isExpired;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)appliesToCriteria:(id)a0;
- (BOOL)canTestInClientProcess;
- (double)delayUntilNextOperationAllowed;
- (void)incrementSentRequestCount;
- (id)throttleBlockingUntilNextRequestWindow;

@end
