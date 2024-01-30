@class NSArray, NSMutableDictionary, NSString;

@interface DKDiagnosticRegistry : NSObject <DKExtensionRegistry>

@property (retain, nonatomic) NSMutableDictionary *diagnosticLookup;
@property (readonly, nonatomic) NSArray *diagnostics;
@property (readonly, nonatomic) Class extensionClass;
@property (readonly, nonatomic) Class responseObjectClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)adapterForIdentifier:(id)a0;
- (void)addExtensionAdapter:(id)a0;
- (id)diagnosticForIdentifier:(id)a0;
- (void)enumerateExtensionAdaptersWithBlock:(id /* block */)a0;

@end
