@class SFPunchout, NSString, NSArray, SFText, NSDictionary, SFImage, NSData;

@interface SFMediaItem : NSObject <SFMediaItem, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) SFText *subtitleText;
@property (retain, nonatomic) SFImage *thumbnail;
@property (retain, nonatomic) SFImage *reviewGlyph;
@property (retain, nonatomic) SFImage *overlayImage;
@property (copy, nonatomic) NSString *reviewText;
@property (retain, nonatomic) SFPunchout *punchout;
@property (copy, nonatomic) NSArray *subtitleCustomLineBreaking;
@property (copy, nonatomic) NSArray *buyOptions;
@property (copy, nonatomic) NSString *contentAdvisory;
@property (retain, nonatomic) SFImage *contentAdvisoryImage;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProtobuf:(id)a0;
- (void).cxx_destruct;

@end
