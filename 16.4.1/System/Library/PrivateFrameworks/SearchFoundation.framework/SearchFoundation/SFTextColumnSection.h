@class NSArray, NSDictionary, NSData, NSString;

@interface SFTextColumnSection : NSObject <SFTextColumnSection, NSSecureCoding, NSCopying> {
    struct { unsigned char textNoWrap : 1; unsigned char textWeight : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *textLines;
@property (nonatomic) BOOL textNoWrap;
@property (nonatomic) unsigned long long textWeight;
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
- (BOOL)hasTextNoWrap;
- (BOOL)hasTextWeight;

@end
