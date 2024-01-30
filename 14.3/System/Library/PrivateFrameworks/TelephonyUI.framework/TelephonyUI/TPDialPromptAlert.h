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

- (id)defaultButtonTitle;
- (void)show;
- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)remoteAlertHandleDidActivate:(id)a0;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (id)initWithDialRequest:(id)a0 dialAction:(id /* block */)a1;
- (id)initWithJoinRequest:(id)a0 dialAction:(id /* block */)a1;
- (id)title;
- (id)otherButtonTitle;
- (id)initWithButtonTitle:(id)a0 handles:(id)a1 dialAction:(id /* block */)a2;
- (id)phoneNumberHandle;
- (void)defaultResponse;
- (void)otherResponse;

@end
