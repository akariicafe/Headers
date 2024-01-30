@class NSString, NSObject;
@protocol OS_xpc_object;

@interface CSAudioStartStreamOption : NSObject

@property (nonatomic) BOOL requestHistoricalAudioDataWithHostTime;
@property (nonatomic) BOOL requestHistoricalAudioDataSampleCount;
@property (nonatomic) unsigned long long startRecordingHostTime;
@property (nonatomic) unsigned long long startRecordingSampleCount;
@property (nonatomic) BOOL useOpportunisticZLL;
@property (nonatomic) long long startAlertBehavior;
@property (nonatomic) long long stopAlertBehavior;
@property (nonatomic) long long errorAlertBehavior;
@property (nonatomic) BOOL skipAlertBehavior;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (nonatomic) BOOL requireSingleChannelLookup;
@property (nonatomic) unsigned int selectedChannel;

+ (id)noAlertOption;

- (id)initWithXPCObject:(id)a0;
- (void)setAVVCAlertBehavior:(id)a0;
- (id)avvcAlertBehavior;
- (long long)_alertBehaviorTypeFromAVVCOberrideType:(long long)a0;
- (long long)_avvcAlertOverrideType:(long long)a0;
- (id)avvcStartRecordSettingsWithAudioStreamHandleId:(unsigned long long)a0;
- (id)avvcSettings;

@end
