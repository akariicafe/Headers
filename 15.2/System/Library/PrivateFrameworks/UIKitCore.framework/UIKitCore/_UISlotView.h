@class NSString, UISSlotStyle;
@protocol UISSlotAnyContent;

@interface _UISlotView : UIView {
    NSString *_localization;
    id /* block */ _slotStyleResolver;
    id /* block */ _slotAnyContentProvider;
    UISSlotStyle *_currentSlotStyle;
    struct CGSize { double width; double height; } _intrinsicContentSize;
    id<UISSlotAnyContent> _slotContent;
    unsigned long long _currentGeneration;
}

@property (copy, nonatomic, setter=_setSlotAnyContentProvider:) id /* block */ _slotAnyContentProvider;
@property (copy, nonatomic, setter=_setSlotStyleResolver:) id /* block */ _slotStyleResolver;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)displayLayer:(id)a0;
- (void)_updateContent;
- (void)_slotStyleDidChange:(id)a0;
- (void)_overlayView:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void)tintColorDidChange;
- (void)dealloc;

@end
