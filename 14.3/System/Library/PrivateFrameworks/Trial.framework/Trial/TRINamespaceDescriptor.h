@class NSString, NSURL, TRIAppContainer;

@interface TRINamespaceDescriptor : NSObject

@property (readonly, nonatomic) NSString *namespaceName;
@property (readonly, nonatomic) NSURL *factorsURL;
@property (readonly, nonatomic) TRIAppContainer *appContainer;
@property (readonly, nonatomic) unsigned int namespaceVersion;
@property (readonly, nonatomic) unsigned int namespaceCompatibilityVersion;
@property (readonly, nonatomic) int cloudKitContainerId;
@property (readonly, nonatomic) NSString *resourceAttributionIdentifier;

+ (BOOL)removeDescriptorWithNamespaceName:(id)a0 fromDirectory:(id)a1;
+ (id)loadWithNamespaceName:(id)a0 fromDirectory:(id)a1;
+ (id)descriptorPathForNamespaceName:(id)a0 fromDirectory:(id)a1;
+ (id)loadFromFile:(id)a0;
+ (id)descriptorsForDirectory:(id)a0;

- (BOOL)_isEqualToNamespaceDescriptor:(id)a0;
- (void).cxx_destruct;
- (id)dictionary;
- (unsigned long long)hash;
- (BOOL)saveToDirectory:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)removeFromDirectory:(id)a0;
- (id)initWithNamespaceName:(id)a0 factorsURL:(id)a1 appContainer:(id)a2 namespaceVersion:(unsigned int)a3 namespaceCompatibilityVersion:(unsigned int)a4 cloudKitContainerId:(int)a5 resourceAttributionIdentifier:(id)a6;
- (id)initWithDictionary:(id)a0;
- (BOOL)writeToFile:(id)a0;
- (id)factorsAbsolutePathAsOwner:(BOOL)a0;
- (id)initWithNamespaceName:(id)a0 factorsURL:(id)a1 namespaceVersion:(unsigned int)a2 namespaceCompatibilityVersion:(unsigned int)a3;

@end
