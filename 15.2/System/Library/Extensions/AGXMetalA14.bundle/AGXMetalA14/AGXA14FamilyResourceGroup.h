@class NSString, NSArray;

@interface AGXA14FamilyResourceGroup : NSObject <MTLResourceGroupSPI> {
    unsigned short _resourceGroup;
    NSArray *_resources;
    void *_device;
    BOOL _initedResourceGroup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)containsResource:(id)a0;
- (id)initWithDevice:(void *)a0 resources:(const id *)a1 count:(unsigned long long)a2;

@end
