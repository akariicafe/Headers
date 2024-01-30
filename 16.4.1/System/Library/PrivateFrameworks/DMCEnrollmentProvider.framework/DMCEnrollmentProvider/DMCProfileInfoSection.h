@class NSString, NSAttributedString;

@interface DMCProfileInfoSection : NSObject

@property (copy, nonatomic) NSString *sectionTitle;
@property (copy, nonatomic) NSString *sectionFooter;
@property (copy, nonatomic) NSString *sectionText;
@property (copy, nonatomic) NSAttributedString *sectionAttributedText;

- (void).cxx_destruct;
- (id)initWithSectionTitle:(id)a0 footer:(id)a1 attributedText:(id)a2;
- (id)initWithSectionTitle:(id)a0 footer:(id)a1 text:(id)a2;

@end
