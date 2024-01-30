@class NSArray, NSString;

@interface _INPBPayloadNeedsValue : PBCodable <_INPBPayloadNeedsValue, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *promptItems;
@property (readonly, nonatomic) unsigned long long promptItemsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)promptItemsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearPromptItems;
- (void)addPromptItems:(id)a0;
- (id)promptItemsAtIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
