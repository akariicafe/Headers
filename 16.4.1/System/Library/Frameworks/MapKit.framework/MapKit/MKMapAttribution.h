@class NSString, UIImage, NSURL, NSAttributedString;

@interface MKMapAttribution : NSObject

@property (readonly, nonatomic) NSString *providerString;
@property (readonly, nonatomic) UIImage *providerImage;
@property (readonly, nonatomic) NSString *providerName;
@property (readonly, nonatomic) NSAttributedString *string;
@property (readonly, nonatomic) NSURL *url;

+ (id)attributionUrlFromRegionalAttributions:(id)a0;

- (void).cxx_destruct;
- (id)disclosureArrow;
- (id)attributedStringWithImage:(id)a0;
- (id)initWithStringAttributes:(id)a0 regionalAttributions:(id)a1 underlineText:(BOOL)a2 applyLinkAttribution:(BOOL)a3 scale:(double)a4;

@end
