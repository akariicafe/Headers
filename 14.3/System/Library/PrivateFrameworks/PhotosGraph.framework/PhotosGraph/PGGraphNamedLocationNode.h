@class NSString;

@interface PGGraphNamedLocationNode : PGGraphLocationNode

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *UUID;

- (void).cxx_destruct;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)a0;
- (unsigned short)domain;
- (id)description;
- (id)initWithLabel:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2;

@end
