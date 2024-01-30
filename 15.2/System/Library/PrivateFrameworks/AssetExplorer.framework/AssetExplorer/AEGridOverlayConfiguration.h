@interface AEGridOverlayConfiguration : NSObject

@property (readonly, nonatomic) BOOL showVideoDecoration;
@property (readonly, nonatomic) BOOL showCloudDecoration;
@property (readonly, nonatomic) BOOL showLoopDecoration;

- (BOOL)isEqual:(id)a0;
- (id)initWithShowCloudDecoration:(BOOL)a0 showVideoDecoration:(BOOL)a1 showLoopDecoration:(BOOL)a2;

@end
