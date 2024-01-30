@class NSDictionary, NSData, NSString;

@interface SFTableColumnAlignment : NSObject <SFTableColumnAlignment, NSSecureCoding, NSCopying> {
    struct { unsigned char columnAlignment : 1; unsigned char dataAlignment : 1; unsigned char isEqualWidth : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int columnAlignment;
@property (nonatomic) int dataAlignment;
@property (nonatomic) BOOL isEqualWidth;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasColumnAlignment;
- (BOOL)hasDataAlignment;
- (BOOL)hasIsEqualWidth;

@end
