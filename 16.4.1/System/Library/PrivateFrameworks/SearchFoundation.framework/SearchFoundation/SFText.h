@class NSString, NSDictionary, NSData;

@interface SFText : NSObject <SFText, NSSecureCoding, NSCopying> {
    struct { unsigned char maxLines : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *text;
@property (nonatomic) unsigned long long maxLines;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textWithString:(id)a0;

- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasMaxLines;

@end
