@interface MPSStateResourceList : NSObject {
    struct ResourceListNode { void /* function */ **x0; struct ResourceListNode *x1; } *_list;
}

+ (id)resourceList;
+ (id)resourceListWithBufferSizes:(unsigned long long)a0;
+ (id)resourceListWithTextureDescriptors:(id)a0;

- (id)debugDescription;
- (void)dealloc;
- (id)init;
- (void)appendBuffer:(unsigned long long)a0;
- (void)appendTexture:(id)a0;
- (void)appendTexture:(id)a0 format:(unsigned long long)a1;

@end
