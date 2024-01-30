@interface FBSceneMonitorBehaviors : NSObject <NSCopying>

@property (nonatomic) BOOL monitorsClientSettings;
@property (nonatomic) BOOL monitorsSettings;
@property (nonatomic) BOOL monitorsPairingStatus;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
