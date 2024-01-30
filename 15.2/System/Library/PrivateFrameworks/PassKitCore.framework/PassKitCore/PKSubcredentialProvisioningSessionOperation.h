@class NSString;

@interface PKSubcredentialProvisioningSessionOperation : PKSubcredentialProvisioningOperation <PKSessionDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)session:(id)a0 didChangeState:(unsigned long long)a1;

@end
