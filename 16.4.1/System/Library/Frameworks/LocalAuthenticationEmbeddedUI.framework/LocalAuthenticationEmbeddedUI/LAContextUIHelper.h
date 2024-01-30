@class NSString, LAAuthorizationViewController;

@interface LAContextUIHelper : NSObject <LAContextObserver> {
    LAAuthorizationViewController *_ui;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (void)contextDidBecomeInvalid:(id)a0;
- (void)authenticateWithOptions:(id)a0 availableMechanisms:(id)a1 hostVC:(id)a2 context:(id)a3 reply:(id /* block */)a4;

@end
