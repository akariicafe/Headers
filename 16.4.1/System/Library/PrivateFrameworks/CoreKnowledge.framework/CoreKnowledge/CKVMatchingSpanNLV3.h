@class NSString;

@interface CKVMatchingSpanNLV3 : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *ontologyLabel;
@property (readonly, nonatomic) NSString *semanticValue;
@property (readonly, nonatomic) unsigned long long beginIndex;
@property (readonly, nonatomic) unsigned long long endIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithOntologyLabel:(id)a0 semanticValue:(id)a1 beginIndex:(unsigned long long)a2 endIndex:(unsigned long long)a3;
- (BOOL)isEqualToMatchingSpanNLV3:(id)a0;

@end
