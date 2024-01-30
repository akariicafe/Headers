@class TRIAppContainer, NSString, NSSet, NSURL;

@interface TRINamespaceDescriptor : NSObject

@property (readonly, nonatomic) NSString *namespaceName;
@property (readonly, nonatomic) unsigned int downloadNCV;
@property (readonly, nonatomic) NSURL *factorsURL;
@property (readonly, nonatomic) TRIAppContainer *appContainer;
@property (readonly, nonatomic) NSSet *upgradeNCVs;
@property (readonly, nonatomic) int cloudKitContainerId;
@property (readonly, nonatomic) NSString *resourceAttributionIdentifier;
@property (readonly, nonatomic) BOOL expensiveNetworkingAllowed;
@property (readonly, nonatomic) BOOL enableFetchDuringSetupAssistant;
@property (readonly, nonatomic) int purgeabilityLevel;

+ (BOOL)removeDescriptorWithNamespaceName:(id)a0 fromDirectory:(id)a1;
+ (void)enumerateDescriptorsInDirectory:(id)a0 block:(id /* block */)a1;
+ (id)descriptorsForDirectory:(id)a0 filterBlock:(id /* block */)a1;
+ (id)loadWithNamespaceName:(id)a0 fromDirectory:(id)a1;
+ (id)descriptorPathForNamespaceName:(id)a0 fromDirectory:(id)a1;
+ (id)loadFromFile:(id)a0;

- (id)dictionary;
- (id)initWithNamespaceName:(id)a0 downloadNCV:(unsigned int)a1 optionalParams:(id)a2;
- (BOOL)_upgradeNCVsArePositiveIntegers:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)factorsAbsolutePathAsOwner:(BOOL)a0;
- (unsigned long long)hash;
- (BOOL)_isEqualToNamespaceDescriptor:(id)a0;
- (BOOL)removeFromDirectory:(id)a0;
- (BOOL)saveToDirectory:(id)a0;
- (void).cxx_destruct;
- (BOOL)writeToFile:(id)a0;
- (BOOL)_upgradeNCVsIsValid:(id)a0;

@end
