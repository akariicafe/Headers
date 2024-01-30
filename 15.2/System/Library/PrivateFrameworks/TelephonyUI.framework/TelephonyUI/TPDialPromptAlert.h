@class NSString, SBSRemoteAlertHandle, NSSet, BSProcessHandle;

@interface TPDialPromptAlert : TPAlert <SBSRemoteAlertHandleObserver>

@property (retain, nonatomic) SBSRemoteAlertHandle *remoteAlertHandle;
@property (copy, nonatomic) id /* block */ dialAction;
@property (readonly, copy, nonatomic) NSString *buttonTitle;
@property (readonly, copy, nonatomic) NSSet *handles;
@property (readonly, nonatomic) BSProcessHandle *processHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)remoteAlertHandleDidActivate:(id)a0;
- (id)otherButtonTitle;
- (id)title;
- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void).cxx_destruct;
- (id)defaultButtonTitle;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (void)show;
- (void)dealloc;
- (id)initWithDialRequest:(id)a0 dialAction:(id /* block */)a1;
- (id)initWithJoinRequest:(id)a0 dialAction:(id /* block */)a1;
- (id)initWithButtonTitle:(id)a0 handles:(id)a1 dialAction:(id /* block */)a2;
- (id)phoneNumberHandle;
- (void)defaultResponse;
- (void)otherResponse;

@end
