@class NSString, _UIToolTipInteractionStyle, UIView;
@protocol UIToolTipInteractionDelegate, NSCopying;

@interface UIToolTipInteraction : NSObject <UIToolTipProvider, _UIVisualStyleStylable, UIInteraction> {
    BOOL _delegateImplementsToolTipAtPoint;
    BOOL _isDefaultInteraction;
    _UIToolTipInteractionStyle *_style;
}

@property (class, readonly, nonatomic) id<NSCopying> visualStyleRegistryIdentity;

@property (weak, nonatomic) id<UIToolTipInteractionDelegate> delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) NSString *defaultToolTip;
@property (readonly, weak, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_defaultToolTipInteractionFromInteractions:(id)a0;
+ (id)_newDefaultToolTipInteraction;

- (void)willMoveToView:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)didMoveToView:(id)a0;
- (void)_refreshStyle;
- (void)_updateStyleForInteractionProperties;
- (id)initWithDefaultToolTip:(id)a0;
- (id)toolTipAtPoint:(struct CGPoint { double x0; double x1; })a0 boundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;

@end
