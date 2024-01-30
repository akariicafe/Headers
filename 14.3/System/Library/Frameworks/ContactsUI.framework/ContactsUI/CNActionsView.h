@class UIFont, NSMutableDictionary, NSArray, NUIContainerStackView, NSString, NSObject;
@protocol CNActionsViewProtocol;

@interface CNActionsView : UIView <CNActionViewDelegate, NUIContainerViewDelegate>

@property (retain, nonatomic) NSMutableDictionary *actionItemsByType;
@property (retain, nonatomic) NSMutableDictionary *actionViewsByType;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) NUIContainerStackView *containerView;
@property (weak, nonatomic) NSObject<CNActionsViewProtocol> *actionsDelegate;
@property (copy, nonatomic) NSArray *sortedActionTypes;
@property (nonatomic) double spacing;
@property (nonatomic) long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)axisWithTitlesPresent:(BOOL)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateAxis;
- (unsigned long long)insertionIndexForType:(id)a0;
- (id)actionViewForType:(id)a0;
- (void)addActionItem:(id)a0;
- (void)removeActionItem:(id)a0;
- (void)updateActionItem:(id)a0;
- (void).cxx_destruct;
- (BOOL)actionViewShouldPresentDisambiguationUI:(id)a0;
- (void)didPressActionView:(id)a0 longPress:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)resetActions;

@end
