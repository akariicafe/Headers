@class NSString;

@interface _MFDAMSUpdateConsumer : _MFDAMSBasicConsumer <MFDASyncActionsConsumer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handleItems:(id)a0;
- (void)handleResponse:(id)a0 error:(id)a1;
- (void)drainMailbox;
- (void)receiveSyncActions:(id)a0;
- (void)commitSyncActions;

@end
