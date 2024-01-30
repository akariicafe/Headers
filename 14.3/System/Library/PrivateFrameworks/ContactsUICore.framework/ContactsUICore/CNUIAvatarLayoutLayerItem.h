@class CALayer;
@protocol CNCancelable;

@interface CNUIAvatarLayoutLayerItem : NSObject

@property (retain, nonatomic) CALayer *layer;
@property (retain, nonatomic) id<CNCancelable> avatarImageRendererToken;

- (void).cxx_destruct;
- (void)resetToken;
- (id)initWithLayer:(id)a0;

@end
