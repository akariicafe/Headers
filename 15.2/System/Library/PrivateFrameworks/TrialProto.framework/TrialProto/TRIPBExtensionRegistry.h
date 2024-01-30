@class NSMutableDictionary;

@interface TRIPBExtensionRegistry : NSObject <NSCopying> {
    NSMutableDictionary *mutableClassMap_;
}

- (void)addExtension:(id)a0;
- (void)addExtensions:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)extensionForDescriptor:(id)a0 fieldNumber:(long long)a1;
- (void)dealloc;

@end
