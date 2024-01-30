@class NSString, SORemoteExtensionViewController, SOExtension;
@protocol POExtensionDelegate;

@interface POExtension : NSObject <SOExtensionDelegate, POExtensionRegistrationProtocol> {
    SOExtension *_extension;
    SORemoteExtensionViewController *_extensionViewController;
}

@property (weak) id<POExtensionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)authorization:(id)a0 didCompleteWithCredential:(id)a1 error:(id)a2;
- (void)registrationDidComplete;
- (void)beginUserRegistrationUsingUserName:(id)a0 authenticationMethod:(int)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)beginDeviceRegistrationUsingOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)unload;
- (void)presentAuthorizationViewControllerWithHints:(id)a0 completion:(id /* block */)a1;
- (BOOL)canPerformRegistration;
- (id)initWithExtensionBundleIdentifier:(id)a0;

@end
