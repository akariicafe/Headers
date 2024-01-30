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

- (id)localizedDescription;
- (void)addConfiguration:(id)a0;
- (void)removeConfiguration:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)containsConfiguration:(id)a0;
- (id)predicateRepresentation;

@end
