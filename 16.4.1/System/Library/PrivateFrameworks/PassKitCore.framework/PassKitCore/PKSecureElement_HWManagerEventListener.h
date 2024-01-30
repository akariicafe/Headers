@class NSString;

@interface PKSecureElement_HWManagerEventListener : NSObject <NFHardwareEventListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)secureElement:(id)a0 didChangeRestrictedMode:(BOOL)a1;

@end
