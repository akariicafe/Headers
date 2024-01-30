@class ILClassificationUIExtensionContext;

@interface ILClassificationUIExtensionViewController : UIViewController

@property (readonly, nonatomic) ILClassificationUIExtensionContext *extensionContext;

- (void)prepareForClassificationRequest:(id)a0;
- (id)classificationResponseForRequest:(id)a0;

@end
