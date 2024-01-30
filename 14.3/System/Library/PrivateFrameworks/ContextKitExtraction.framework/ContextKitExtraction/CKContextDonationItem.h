@class NSString;

@interface CKContextDonationItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *debugText;
@property (retain, nonatomic) NSString *debugUrlString;
@property (retain, nonatomic, setter=setText:) NSString *text;
@property (retain, nonatomic, setter=setTitle:) NSString *title;
@property (retain, nonatomic, setter=setContentDescription:) NSString *contentDescription;
@property (retain, nonatomic, setter=setContentKeywords:) NSString *contentKeywords;
@property (retain, nonatomic, setter=setContentAuthor:) NSString *contentAuthor;
@property (retain, nonatomic) NSString *languageTag;

+ (id)trimTextToSize:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
