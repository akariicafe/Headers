@class NSString, UIView;
@protocol UIToolTipInteractionDelegate;

@interface UIToolTipInteraction : NSObject <UIInteraction> {
    struct { BOOL toolTipAtPoint; BOOL toolTipAndBoundingRectAtPoint; } _delegateImplementsDeprecated;
    BOOL _delegateImplementsToolTipAtPoint;
    BOOL _isDefaultInteraction;
}

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

- (void)didMoveToView:(id)a0;
- (void)willMoveToView:(id)a0;
- (id)_toolTipAtPoint:(struct CGPoint { double x0; double x1; })a0 boundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (id)initWithDefaultToolTip:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
