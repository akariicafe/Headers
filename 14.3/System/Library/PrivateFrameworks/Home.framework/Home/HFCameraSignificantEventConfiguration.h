@interface HFCameraSignificantEventConfiguration : NSObject <NSCopying>

@property (nonatomic) unsigned long long eventTypes;
@property (nonatomic) unsigned long long personFamiliarityOptions;
@property (readonly, nonatomic) BOOL isFaceDetectionConfiguration;

+ (id)_configurationForCameraProfiles:(id)a0 eventTypesTransform:(id /* block */)a1 personFamiliarityOptionsTransform:(id /* block */)a2;
+ (id)configurationWithEventTypes:(unsigned long long)a0 personFamiliarityOptions:(unsigned long long)a1;
+ (id)configurationForCameraProfilesNotificationSettings:(id)a0;
+ (id)configurationForCameraProfilesRecordingSettings:(id)a0;
+ (id)defaultAnyMotionConfiguration;
+ (id)defaultSmartMotionConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)localizedDescription;
- (void)removeConfiguration:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)containsConfiguration:(id)a0;
- (id)predicateRepresentation;
- (void)addConfiguration:(id)a0;

@end
