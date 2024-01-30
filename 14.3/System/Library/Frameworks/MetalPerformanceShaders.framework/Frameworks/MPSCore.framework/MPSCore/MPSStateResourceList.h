@interface MPSStateResourceList : NSObject {
    struct ResourceListNode { void /* function */ **x0; struct ResourceListNode *x1; } *_list;
}

+ (id)resourceListWithBufferSizes:(unsigned long long)a0;
+ (id)resourceListWithTextureDescriptors:(id)a0;
+ (id)resourceList;

- (id)init;
- (void)dealloc;
- (void)appendTexture:(id)a0;
- (id)debugDescription;
- (void)appendBuffer:(unsigned long long)a0;
- (void)appendTexture:(id)a0 format:(unsigned long long)a1;

@end
