@class NSString, PGGraphBabyNodeCollection;

@interface PGGraphBabyNode : PGGraphOptimizedNode {
    NSString *_uuid;
}

@property (readonly, nonatomic) PGGraphBabyNodeCollection *collection;

+ (id)filter;
+ (id)caretakerOfBaby;
+ (id)momentOfBaby;

- (unsigned short)domain;
- (id)initWithUUID:(id)a0;
- (BOOL)hasProperties:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)label;
- (id)description;
- (id)propertyDictionary;
- (void).cxx_destruct;

@end
