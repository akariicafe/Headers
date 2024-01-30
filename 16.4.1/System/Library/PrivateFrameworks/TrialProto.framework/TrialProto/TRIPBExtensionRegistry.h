@class NSMutableDictionary;

@interface TRIPBExtensionRegistry : NSObject <NSCopying> {
    NSMutableDictionary *mutableClassMap_;
}

- (void)addExtensions:(id)a0;
- (id)extensionForDescriptor:(id)a0 fieldNumber:(long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addExtension:(id)a0;
- (void)dealloc;
- (id)init;

@end
