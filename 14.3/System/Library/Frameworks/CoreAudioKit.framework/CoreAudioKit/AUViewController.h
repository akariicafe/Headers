@class NSString, NSExtensionContext;

@interface AUViewController : UIViewController <NSExtensionRequestHandling>

@property NSExtensionContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginRequestWithExtensionContext:(id)a0;

@end
