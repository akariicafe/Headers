@class NSString, NSDate;

@interface CKThrottle : NSObject

@property (copy, nonatomic) NSString *defaultsKey;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *containerIdentifier;
@property (nonatomic) long long databaseScope;
@property (copy, nonatomic) NSString *zoneName;
@property (nonatomic) int operationType;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *functionName;
@property (retain, nonatomic) NSDate *throttleStartDate;
@property (nonatomic) unsigned long long intervalLengthSeconds;
@property (nonatomic) unsigned long long allowedRequestCount;
@property (retain, nonatomic) NSDate *expirationDate;
@property (nonatomic) unsigned long long sentRequestCount;
@property (nonatomic) unsigned long long currentRequestWindowIndex;

+ (BOOL)addThrottle:(id)a0;
+ (id)CKStatusReportArray;
+ (id)enforcedThrottleForCriteria:(id)a0 willSendRequest:(BOOL)a1 outThrottleError:(id *)a2;
+ (void)resetThrottles;
+ (void)locked_removeThrottles:(id)a0;
+ (void)removeThrottles:(id)a0;
+ (id)throttlingErrorWithRetry:(double)a0;
+ (void)setThrottleObserver:(id)a0;
+ (void)removeThrottle:(id)a0;
+ (id)allThrottles;
+ (void)setThrottleList:(id)a0;
+ (void)throttleWillBeRemoved:(id)a0;

- (id)init;
- (BOOL)isExpired;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)appliesToCriteria:(id)a0;
- (id)initWithDefaultsKey:(id)a0;
- (void)takeValuesFromThrottleDictionary:(id)a0;
- (double)delayUntilNextOperationAllowed;
- (void)throttleDataWasChanged;
- (id)throttleDictionaryBlockingUntilNextRequestWindow;
- (void)setThrottles:(id)a0;
- (BOOL)canTestInClientProcess;

@end
