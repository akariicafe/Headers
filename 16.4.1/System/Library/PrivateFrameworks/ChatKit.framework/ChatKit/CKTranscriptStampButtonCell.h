@class UIButton;

@interface CKTranscriptStampButtonCell : CKTranscriptStampCell

@property (readonly, nonatomic) UIButton *stampButton;

+ (id)reuseIdentifier;
+ (id)createStampTextView;

- (void)setAttributedText:(id)a0;
- (id)attributedText;

@end
