@class UIImage;
@protocol BSInvalidatable;

@interface SBWImageSlot : NSObject

@property (retain, setter=_setImage:) UIImage *image;
@property (readonly, nonatomic) id<BSInvalidatable> lifetimeToken;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithImage:(id)a0 lifetimeToken:(id)a1;
- (id)_initWithImage:(id)a0 lifetimeToken:(id)a1;
- (id)_deferredImageSlot;

@end
