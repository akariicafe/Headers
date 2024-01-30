@class CALayer;
@protocol CNCancelable;

@interface CNUIAvatarLayoutLayerItem : NSObject

@property (retain, nonatomic) CALayer *layer;
@property (retain, nonatomic) id<CNCancelable> avatarImageRendererToken;

- (id)initWithLayer:(id)a0;
- (void)resetToken;
- (void).cxx_destruct;

@end
