@class NSAttributedString;

@interface GameCenterUI.DynamicTypeLinkedLabel : GameCenterUI.DynamicTypeLabel {
    void /* unknown type, empty encoding */ items;
    void /* unknown type, empty encoding */ tapGestureRecognizer;
    void /* unknown type, empty encoding */ linkInteractionDelegate;
}

@property (nonatomic, retain) NSAttributedString *attributedText;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)labelTapped:(id)a0;

@end
