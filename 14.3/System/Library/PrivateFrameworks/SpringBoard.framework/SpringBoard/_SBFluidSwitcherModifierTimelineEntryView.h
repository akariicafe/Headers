@class UILabel, UITapGestureRecognizer, SBSwitcherModifierTimelineEntry;
@protocol _SBFluidSwitcherModifierTimelineEntryViewDelegate;

@interface _SBFluidSwitcherModifierTimelineEntryView : UIView {
    UILabel *_nameLabel;
    UILabel *_postStackLabel;
    UILabel *_actionsLabel;
    UITapGestureRecognizer *_tapRecognizer;
}

@property (retain, nonatomic) SBSwitcherModifierTimelineEntry *entry;
@property (weak, nonatomic) id<_SBFluidSwitcherModifierTimelineEntryViewDelegate> delegate;

- (void)_tap:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 entry:(id)a1;
- (id)_stringForStack:(id)a0;
- (id)_appendRecursiveDescriptionToString:(id)a0 level:(unsigned long long)a1 snapshot:(id)a2;
- (id)_randomColor;

@end
