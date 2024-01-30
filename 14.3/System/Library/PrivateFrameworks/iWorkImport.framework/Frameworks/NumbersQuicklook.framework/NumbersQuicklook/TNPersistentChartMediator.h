@class NSString;

@interface TNPersistentChartMediator : TSCHPersistentChartMediator <TSKDocumentObject, TSCECalculationEngineRegistration>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willModify;
- (void)willBeRemovedFromDocumentRoot:(id)a0;
- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)wasAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)registerWithCalcEngineForDocumentLoad:(id)a0;
- (void)unregisterFromCalcEngine:(id)a0;
- (id)formulaOwner;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x0[16]; struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; } x1; struct { unsigned long long x0; unsigned long long x1; } x2; } x0; })formulaOwnerUID;
- (id)objectToArchiveInDependencyTracker;
- (BOOL)registerLast;
- (id)nsFormulaOwnerUID;

@end
