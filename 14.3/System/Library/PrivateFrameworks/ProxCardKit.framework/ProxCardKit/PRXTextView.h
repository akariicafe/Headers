@class NSString, NSAttributedString;

@interface PRXTextView : UITextView <PRXTextContainer>

@property (readonly, nonatomic) long long style;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textViewWithStyle:(long long)a0;

- (id)initWithStyle:(long long)a0;
- (void)setTitleText:(id)a0;

@end
