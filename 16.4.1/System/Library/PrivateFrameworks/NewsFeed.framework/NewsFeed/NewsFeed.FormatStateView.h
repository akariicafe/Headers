@class NSString, NSArray;

@interface NewsFeed.FormatStateView : UIView {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ stateViewFormatLayoutViews;
    void /* unknown type, empty encoding */ state;
}

@property (nonatomic) BOOL isAccessibilityElement;
@property (nonatomic, copy) NSString *accessibilityIdentifier;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic, copy) NSString *accessibilityHint;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic, copy) NSArray *accessibilityCustomActions;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
