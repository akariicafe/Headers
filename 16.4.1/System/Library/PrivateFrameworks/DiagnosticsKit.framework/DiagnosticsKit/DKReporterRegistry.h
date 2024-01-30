@class NSSet, NSMutableDictionary, NSString;

@interface DKReporterRegistry : NSObject <DKExtensionRegistry>

@property (retain, nonatomic) NSMutableDictionary *generatorLookup;
@property (retain, nonatomic) NSMutableDictionary *componentDedup;
@property (readonly, nonatomic) NSSet *components;
@property (readonly, nonatomic) NSSet *generators;
@property (readonly, nonatomic) Class extensionClass;
@property (readonly, nonatomic) Class responseObjectClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addExtensionAdapter:(id)a0;
- (void)enumerateExtensionAdaptersWithBlock:(id /* block */)a0;
- (id)generatorForComponentIdentity:(id)a0;

@end
