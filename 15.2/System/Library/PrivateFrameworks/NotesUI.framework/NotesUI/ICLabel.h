@class NSString, NSAttributedString;

@interface ICLabel : UILabel

@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) NSAttributedString *attributedString;
@property (nonatomic) double spacing;
@property (nonatomic) double paragraphSpacing;
@property (nonatomic) double lineHeight;

- (void)updateText;
- (void).cxx_destruct;

@end
