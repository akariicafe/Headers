@class UIView;

@interface SeymourUI.MetadataEntriesView : UIView {
    void /* unknown type, empty encoding */ actionHandler;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ currentEntries;
    void /* unknown type, empty encoding */ currentViews;
    void /* unknown type, empty encoding */ stackView;
}

@property (nonatomic, readonly) UIView *viewForFirstBaselineLayout;
@property (nonatomic, readonly) UIView *viewForLastBaselineLayout;
@property (nonatomic, readonly) BOOL canBecomeFocused;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
