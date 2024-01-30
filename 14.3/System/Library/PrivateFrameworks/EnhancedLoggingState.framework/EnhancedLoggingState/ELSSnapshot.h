@class NSArray, NSDictionary, NSDate, NSNumber, NSUserDefaults;

@interface ELSSnapshot : NSObject <NSCopying>

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long consent;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSArray *queue;
@property (nonatomic) long long retriesRemaining;
@property (retain, nonatomic) NSArray *identifiersToRetry;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSNumber *uploadCompletedPercentage;
@property (retain, nonatomic) NSDictionary *followUpOptions;
@property (readonly, nonatomic) double durationRemaining;
@property (readonly, nonatomic) double totalDuration;
@property (readonly, nonatomic) BOOL needsFollowup;
@property (readonly, nonatomic) NSArray *encodedQueue;

+ (id)statusToString:(unsigned long long)a0;
+ (id)consentToString:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshDates;
- (id)description;
- (id)JSONObject;
- (void)refreshKeyPaths:(id)a0;
- (void)refreshStatus;
- (void)refreshConsent;
- (void)refreshQueue;
- (void)refreshRetriesRemaining;
- (void)refreshIdentifiersToRetry;
- (void)refreshMetadata;
- (void)refreshUploadCompletedPercentage;
- (void)refreshFollowUpOptions;
- (id)decodeQueue:(id)a0;
- (id)dictionaryRepresentationPretty:(BOOL)a0;

@end
