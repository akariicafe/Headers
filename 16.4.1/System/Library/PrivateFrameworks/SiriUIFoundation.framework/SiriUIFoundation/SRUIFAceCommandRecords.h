@class NSString, NSMutableDictionary;
@protocol SRUIFAceCommandRecordsDelegate;

@interface SRUIFAceCommandRecords : NSObject <SRUIFAceCommandRecordDelegate>

@property (readonly, nonatomic, getter=_recordsByCommandIdentifier) NSMutableDictionary *recordsByCommandIdentifier;
@property (weak, nonatomic) id<SRUIFAceCommandRecordsDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_recordForAceCommand:(id)a0;
- (void)aceCommandRecordDidChangeResult:(id)a0;
- (id)aceCommandWithIdentifier:(id)a0;
- (id)pendingAddViewsWithReflectionDialogPhaseWithRefId:(id)a0;
- (void)recordActionCompletedForAceCommand:(id)a0 success:(BOOL)a1;
- (void)recordActionStartedForAceCommand:(id)a0;
- (void)recordActionStoppedForAceCommand:(id)a0;
- (void)registerAceCommand:(id)a0 completion:(id /* block */)a1;
- (long long)resultForAceCommand:(id)a0;

@end
