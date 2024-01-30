@class NSString, NSMutableDictionary, NSMutableArray;
@protocol DKUIResponder;

@interface DKDiagnosticXPCManager : DKDiagnosticManager <DKAssetResponder, DKUIResponder>

@property (retain, nonatomic) NSMutableDictionary *diagnostics;
@property (retain, nonatomic) NSMutableArray *activeDiagnostics;
@property (weak, nonatomic) id<DKUIResponder> uiResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)attributesForIdentifier:(id)a0;
- (void)beginDiagnosticWithIdentifier:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;
- (void)cancelAllDiagnostics;
- (void)diagnosticsWithCompletion:(id /* block */)a0;
- (void)getAsset:(id)a0 completion:(id /* block */)a1;
- (id)initWithBundleIdentifier:(id)a0 connectionRoute:(unsigned long long)a1;
- (void)registerDiagnosticWithAttributes:(id)a0;
- (void)showUI:(id)a0 completion:(id /* block */)a1;

@end
