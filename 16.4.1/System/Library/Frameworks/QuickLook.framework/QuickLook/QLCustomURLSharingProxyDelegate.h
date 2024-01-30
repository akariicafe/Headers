@class NSString;
@protocol UIDocumentInteractionControllerDelegate;

@interface QLCustomURLSharingProxyDelegate : NSObject <UIDocumentInteractionControllerDelegate>

@property (weak, nonatomic) id<UIDocumentInteractionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)documentInteractionControllerDidDismissOptionsMenu:(id)a0;

@end
