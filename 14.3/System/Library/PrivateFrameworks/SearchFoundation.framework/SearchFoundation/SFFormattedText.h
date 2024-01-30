@class NSString, NSDictionary, NSData, SFImage;

@interface SFFormattedText : SFText <SFFormattedText, NSSecureCoding, NSCopying> {
    struct { unsigned char isEmphasized : 1; unsigned char isBold : 1; unsigned char textColor : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SFImage *glyph;
@property (nonatomic) BOOL isEmphasized;
@property (nonatomic) BOOL isBold;
@property (nonatomic) int textColor;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy) NSString *text;
@property (nonatomic) unsigned long long maxLines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasIsBold;
- (id)initWithProtobuf:(id)a0;
- (BOOL)hasIsEmphasized;
- (void)encodeWithCoder:(id)a0;
- (BOOL)hasTextColor;

@end
