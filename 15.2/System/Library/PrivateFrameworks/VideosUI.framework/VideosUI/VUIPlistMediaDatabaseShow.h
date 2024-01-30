@class NSArray;

@interface VUIPlistMediaDatabaseShow : VUIPlistMediaDatabaseEntity <NSCopying>

@property (retain, nonatomic) NSArray *seasons;

- (id)isLocal;
- (id)initWithIdentifier:(id)a0;
- (id)description;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)seasonForIdentifier:(id)a0;

@end
