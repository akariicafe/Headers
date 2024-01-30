@class NSArray, NSString, IKEngine, NSMutableArray;

@interface WFInstapaperAction : WFAction <WFDynamicEnumerationDataSource, IKEngineDelegate>

@property (nonatomic) BOOL hasFetchedFolders;
@property (readonly, nonatomic) IKEngine *engine;
@property (readonly, nonatomic) NSArray *connectionTypes;
@property (readonly, nonatomic) BOOL includeSpecialFolders;
@property (readonly, nonatomic) NSMutableArray *identifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)folders;
- (void)dealloc;
- (BOOL)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)finishRunningWithError:(id)a0;
- (void)wasAddedToWorkflow:(id)a0;
- (void)wasRemovedFromWorkflow:(id)a0;
- (id)possibleStatesForEnumeration:(id)a0;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (void)runAsynchronouslyWithInput:(id)a0 selectedFolder:(id)a1;
- (void)engine:(id)a0 willStartConnection:(id)a1;
- (void)engine:(id)a0 didFinishConnection:(id)a1;
- (void)engine:(id)a0 didFailConnection:(id)a1 error:(id)a2;
- (void)engine:(id)a0 connection:(id)a1 didReceiveFolders:(id)a2;
- (void)updateFolders;

@end
