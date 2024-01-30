@class UIView;

@interface _UIFloatableBarButtonItem : UIBarButtonItem

@property (nonatomic, getter=_isFloatable, setter=_setFloatable:) BOOL _floatable;
@property (nonatomic, getter=_isFloating, setter=_setFloating:) BOOL _floating;
@property (retain, nonatomic, setter=_setConfiguredFloatableView:) UIView *_configuredFloatableView;
@property (retain, nonatomic, setter=_setReferenceView:) UIView *_referenceView;

- (void).cxx_destruct;
- (id)description;

@end
