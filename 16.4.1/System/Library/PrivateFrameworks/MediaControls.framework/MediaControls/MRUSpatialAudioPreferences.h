@interface MRUSpatialAudioPreferences : NSObject

@property (readonly, nonatomic) int mode;
@property (readonly, nonatomic) BOOL isHeadTrackingEnabled;

- (id)description;
- (id)descriptionForSpatialMode:(int)a0;
- (id)initWithMode:(int)a0 headTrackingEnabled:(BOOL)a1;

@end
