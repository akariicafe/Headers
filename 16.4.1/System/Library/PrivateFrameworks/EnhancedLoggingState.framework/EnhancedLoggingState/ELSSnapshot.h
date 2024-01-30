@class NSData, NSArray, NSDictionary, DEDDevice, NSDate, NSNumber, NSUserDefaults;

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
@property (retain, nonatomic) NSArray *consentHandles;
@property (retain, nonatomic) DEDDevice *sessionDevice;
@property (retain, nonatomic) NSData *consentData;

+ (id)statusToString:(unsigned long long)a0;
+ (id)consentToString:(unsigned long long)a0;

- (id)JSONObject;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshDates;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)refreshQueue;
- (void)refreshMetadata;
- (id)dictionaryRepresentationPretty:(BOOL)a0;
- (id)decodeQueue:(id)a0;
- (id)dedSessionIdentifier;
- (void)refreshConsent;
- (void)refreshConsentData;
- (void)refreshConsentHandles;
- (void)refreshFollowUpOptions;
- (void)refreshIdentifiersToRetry;
- (void)refreshKeyPaths:(id)a0;
- (void)refreshRetriesRemaining;
- (void)refreshSessionDevice;
- (void)refreshStatus;
- (void)refreshUploadCompletedPercentage;

@end
