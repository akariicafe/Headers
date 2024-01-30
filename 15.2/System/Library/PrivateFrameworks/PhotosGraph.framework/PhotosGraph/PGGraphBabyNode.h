@class NSString, PGGraphBabyNodeCollection;

@interface PGGraphBabyNode : PGGraphOptimizedNode {
    NSString *_uuid;
}

@property (readonly, nonatomic) PGGraphBabyNodeCollection *collection;

+ (id)filter;
+ (id)caretakerOfBaby;
+ (id)momentOfBaby;

- (id)initWithUUID:(id)a0;
- (BOOL)hasProperties:(id)a0;
- (id)description;
- (id)propertyDictionary;
- (id)label;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;

@end
