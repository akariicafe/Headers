@class UIImage;
@protocol BSInvalidatable;

@interface PBUIImageSlot : NSObject

@property (retain, setter=_setImage:) UIImage *image;
@property (readonly, nonatomic) id<BSInvalidatable> lifetimeToken;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_deferredImageSlot;
- (id)_initWithImage:(id)a0 lifetimeToken:(id)a1;
- (id)initWithImage:(id)a0 lifetimeToken:(id)a1;

@end
