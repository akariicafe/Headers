@class NSString;

@interface CADDiagnosticOperationGroup : CADOperationGroup <CADDiagnosticInterface> {
    BOOL _entitled;
    BOOL _entitlementChecked;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)accessGranted;
- (void)CADDiagnosticsCancelCollectionWithToken:(unsigned int)a0 reply:(id /* block */)a1;
- (void)CADDiagnosticsCollectWithToken:(unsigned int)a0 options:(long long)a1 reply:(id /* block */)a2;

@end
