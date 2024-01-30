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
- (void)registerWithCalcEngineForDocumentLoad:(id)a0 ownerKind:(unsigned short)a1;
- (void)unregisterFromCalcEngine:(id)a0;
- (id)formulaOwner;
- (struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })formulaOwnerUID;
- (id)objectToArchiveInDependencyTracker;
- (BOOL)registerLast;
- (unsigned short)ownerKind;
- (id)nsFormulaOwnerUID;

@end
