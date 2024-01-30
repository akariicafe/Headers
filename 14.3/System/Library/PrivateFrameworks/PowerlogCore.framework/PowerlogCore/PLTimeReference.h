@class NSString;
@protocol PLTimeReferenceManager;

@interface PLTimeReference : NSObject

@property (nonatomic) double hourBucketOffset;
@property (nonatomic) double offset;
@property (retain) id<PLTimeReferenceManager> timeManager;
@property long long timeReferenceType;
@property (retain) NSString *entryDefinitionKey;

+ (id)defaultsKeyFromEntryDefinitionKey:(id)a0;
+ (id)hourBucketOffsetKeyFromEntryDefinitionKey:(id)a0;

- (void)writeOffsetToDefaults;
- (id)initWithTimeManager:(id)a0 entryDefinitionKey:(id)a1 timeReferenceType:(long long)a2;
- (double)computeHourBucketOffset;
- (id)addTimeOffsetToMonotonicTime:(id)a0;
- (void)registerForDayChangedNotification;
- (void).cxx_destruct;
- (void)initializeOffsetWithEntries:(id)a0;
- (id)currentTime;
- (id)removeTimeOffsetFromReferenceTime:(id)a0;
- (double)getHourBucketOffset;
- (void)registerForTimeZoneChangedNotification;

@end
