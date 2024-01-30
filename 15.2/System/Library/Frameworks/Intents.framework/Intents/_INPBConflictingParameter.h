@class NSArray, NSString;

@interface _INPBConflictingParameter : PBCodable <_INPBConflictingParameter, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *alternateItems;
@property (readonly, nonatomic) unsigned long long alternateItemsCount;
@property (copy, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) BOOL hasKeyPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)alternateItemsType;

- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)clearAlternateItems;
- (void)addAlternateItems:(id)a0;
- (id)alternateItemsAtIndex:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
