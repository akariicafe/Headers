@class NSString, NSAttributedString;

@interface _UITitleContent : NSObject {
    NSAttributedString *_attributedText;
}

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) double width;

+ (id)contentWithTitle:(id)a0 attributes:(id)a1 button:(id)a2;

- (void)updateWithButton:(id)a0;
- (void)updateWithTitleAttributes:(id)a0 button:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
