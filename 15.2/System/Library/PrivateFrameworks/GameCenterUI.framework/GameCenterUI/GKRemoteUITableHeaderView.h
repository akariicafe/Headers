@class GKLabel, NSDictionary, GKButton, NSArray, NSString;
@protocol GKRemoteUIAuxiliaryViewDelegate;

@interface GKRemoteUITableHeaderView : UIView <RUIPageAccessory>

@property (nonatomic) double height;
@property (retain, nonatomic) GKLabel *label;
@property (retain, nonatomic) GKLabel *subLabel;
@property (retain, nonatomic) GKButton *button;
@property (retain, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) NSArray *replaceableConstraints;
@property (nonatomic) int layoutStyle;
@property (weak, nonatomic) id<GKRemoteUIAuxiliaryViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)bottomMargin;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)buttonTapped:(id)a0;
- (void).cxx_destruct;
- (double)rightMargin;
- (id)initWithAttributes:(id)a0;
- (void)createButtonWithAttributes:(id)a0;
- (void)objectModelDidChange:(id)a0;
- (double)leftMargin;
- (void)createLabelWithAttributes:(id)a0;
- (void)createSubLabelWithAttributes:(id)a0;
- (void)applyConstraints;
- (double)labelBaselineOffset;
- (double)labelBaselineToSubLabelTopOffset;
- (double)labelBaselineToButtonBaselineOffset;
- (double)labelTopOffset;

@end
