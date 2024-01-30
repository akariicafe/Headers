@class NSArray;

@interface VUIPlistMediaDatabaseShow : VUIPlistMediaDatabaseEntity <NSCopying>

@property (retain, nonatomic) NSArray *seasons;

- (id)isLocal;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (id)seasonForIdentifier:(id)a0;

@end
