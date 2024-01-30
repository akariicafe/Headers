@class NSString, NSAttributedString, UIImage;

@interface PKIdentityDocumentDataElement : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *localizedLabel;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSAttributedString *attributedText;
@property (readonly, nonatomic) UIImage *image;

- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocalizedLabel:(id)a0 attributedText:(id)a1;
- (id)initWithLocalizedLabel:(id)a0 text:(id)a1;

@end
