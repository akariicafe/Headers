@interface MRUSpatialAudioPreferences : NSObject

@property (readonly, nonatomic) int mode;
@property (readonly, nonatomic) BOOL isHeadTrackingEnabled;

- (id)description;
- (id)initWithMode:(int)a0 headTrackingEnabled:(BOOL)a1;
- (id)descriptionForSpatialMode:(int)a0;

@end
