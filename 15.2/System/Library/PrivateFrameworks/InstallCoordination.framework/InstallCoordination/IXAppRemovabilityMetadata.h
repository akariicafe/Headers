@interface IXAppRemovabilityMetadata : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long removability;
@property (readonly, nonatomic) unsigned long long client;

- (id)initWithRemovability:(unsigned long long)a0 client:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMetadataDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
