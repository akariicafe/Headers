@class NSString, UIPointerInteraction, UIView;
@protocol PXPhotosPointerControllerDelegate;

@interface PXPhotosPointerController : NSObject <UIPointerInteractionDelegate, PXSettingsKeyObserver>

@property (readonly, nonatomic) UIPointerInteraction *pointerInteraction;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, weak, nonatomic) id<PXPhotosPointerControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)_setupWithContentView:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (id)initWithContentView:(id)a0 delegate:(id)a1;

@end
