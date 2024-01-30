@class NSString, _UIButtonBar;

@interface _UIButtonBarStackView : UIStackView <UIPointerInteractionDelegate> {
    _UIButtonBar *_buttonBar;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;

@end
