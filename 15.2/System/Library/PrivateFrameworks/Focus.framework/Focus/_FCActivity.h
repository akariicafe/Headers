@class NSArray, NSString, NSUUID, DNDMode, NSDate, NSURL;

@interface _FCActivity : NSObject <FCActivityDescribing>

@property (copy, getter=_dndMode, setter=_setDndMode:) DNDMode *dndMode;
@property (copy, nonatomic, setter=_setActivityCreationDate:) NSDate *activityCreationDate;
@property (copy, nonatomic, setter=_setActivityLifetimeDescriptions:) NSArray *activityLifetimeDescriptions;
@property (copy, nonatomic, setter=_setActivityLifetimesAlternativeDescription:) NSString *activityLifetimesAlternativeDescription;
@property (readonly, nonatomic) BOOL supportsDiscreteLifetimes;
@property (readonly, nonatomic, getter=isDrivingActivity) BOOL drivingActivity;
@property (readonly, nonatomic, getter=isSleepActivity) BOOL sleepActivity;
@property (readonly, copy, nonatomic) NSString *activityIdentifier;
@property (readonly, copy, nonatomic) NSUUID *activityUniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *activityDisplayName;
@property (readonly, copy, nonatomic) NSString *activitySymbolImageName;
@property (readonly, copy, nonatomic) NSString *activityColorName;
@property (readonly, copy, nonatomic) NSURL *activitySettingsURL;
@property (readonly, copy, nonatomic) NSURL *activitySetupURL;
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMode:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_updateMode:(id)a0;

@end
