@class NSSet, NSDictionary;

@interface PhotosGraph.Node : NSObject <KGNode> {
    void /* unknown type, empty encoding */ labels;
    void /* unknown type, empty encoding */ properties;
}

@property (nonatomic) void /* unknown type, empty encoding */ identifier;
@property (nonatomic, readonly) NSSet *labels;
@property (nonatomic, readonly) NSDictionary *properties;

- (void)resolveIdentifier:(unsigned long long)a0;
- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(unsigned long long)a0 labels:(id)a1 properties:(id)a2;

@end
