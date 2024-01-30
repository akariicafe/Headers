@class NSString, NSArray, NSMutableDictionary;

@interface BRCAggregateOperation : _BRCFrameworkOperation <BRCOperationSubclass> {
    NSArray *_subOperations;
    NSMutableDictionary *_resultDictionary;
}

@property (copy, nonatomic) id /* block */ wrapperOperationCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (BOOL)shouldRetryForError:(id)a0;
- (id)initWithSyncContext:(id)a0 subOperations:(id)a1;

@end
