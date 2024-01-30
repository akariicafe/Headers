@class NSArray;

@interface SeymourUI.TVFilterResultActionsCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ itemInfo;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ sortButton;
    void /* unknown type, empty encoding */ bottomFocusGuide;
}

@property (nonatomic, readonly) BOOL canBecomeFocused;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)clearButtonTapped;
- (void)sortButtonTapped;

@end
