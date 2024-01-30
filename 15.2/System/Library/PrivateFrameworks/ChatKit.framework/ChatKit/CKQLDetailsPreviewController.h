@class NSString;

@interface CKQLDetailsPreviewController : CKQLPreviewController <QLPreviewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)ckCanDismissWhenSuspending;

@end
