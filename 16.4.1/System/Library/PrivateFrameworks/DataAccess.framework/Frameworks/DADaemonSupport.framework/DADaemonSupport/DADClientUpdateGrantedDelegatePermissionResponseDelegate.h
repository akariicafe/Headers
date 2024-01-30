@class NSString, DAEGrantedDelegate;

@interface DADClientUpdateGrantedDelegatePermissionResponseDelegate : DADClientDelegate <DAEventsUpdateGrantedDelegatePermissionResponseConsumer> {
    id _requestID;
    DAEGrantedDelegate *_grantedDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)updateGrantedDelegatePermissionFinishedWithError:(id)a0;
- (void)performRequest;
- (id)initWithAccountID:(id)a0 client:(id)a1 grantedDelegate:(id)a2;

@end
