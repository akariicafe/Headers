@class NSDictionary;

@interface CKDAddAnonymousShareToSharedDBOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSDictionary *encryptedAnonymousSharesToAdd;
@property (copy, nonatomic) id /* block */ anonymousShareSavedBlock;

- (id)activityCreate;
- (id)nameForState:(unsigned long long)a0;
- (BOOL)makeStateTransition;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (void)main;
- (void).cxx_destruct;
- (void)_addAnonymousSharesToSharedDB;

@end
