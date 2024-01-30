@class NSNumber, NSString, NSDate;

@interface CKThrottle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *rowID;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *containerIdentifier;
@property (nonatomic) long long databaseScope;
@property (copy, nonatomic) NSString *zoneName;
@property (nonatomic) int operationType;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *functionName;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *operationGroupNamePrefix;
@property (retain, nonatomic) NSDate *throttleStartDate;
@property (nonatomic) unsigned long long intervalLengthSeconds;
@property (nonatomic) unsigned long long repeatEverySeconds;
@property (nonatomic) unsigned long long allowedRequestCount;
@property (retain, nonatomic) NSDate *expirationDate;
@property (nonatomic) unsigned long long sentRequestCount;
@property (nonatomic) unsigned long long currentRequestWindowIndex;

- (id)sqliteRepresentation;
- (id)initWithSqliteRepresentation:(id)a0;
- (BOOL)appliesToCriteria:(id)a0;
- (double)delayUntilNextOperationAllowed;
- (void)incrementSentRequestCount;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isExpired;
- (id)description;
- (id)dictionaryRepresentationForJSON:(BOOL)a0;
- (id)throttleBlockingUntilNextRequestWindow;
- (BOOL)canTestInClientProcess;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
