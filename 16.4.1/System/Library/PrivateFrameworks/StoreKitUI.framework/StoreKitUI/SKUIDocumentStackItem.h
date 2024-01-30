@class SKUINavigationDocumentController, UIPopoverPresentationController, NSDictionary, NSString, IKAppDocument, UIViewController;

@interface SKUIDocumentStackItem : NSObject

@property (readonly, nonatomic) IKAppDocument *document;
@property (readonly, nonatomic) NSDictionary *presentationOptions;
@property (nonatomic) BOOL usesNavigationControllerForModalPresentation;
@property (retain, nonatomic) SKUINavigationDocumentController *navigationDocumentController;
@property (retain, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) UIPopoverPresentationController *popoverPresentationController;
@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (readonly, nonatomic) NSString *presentationType;
@property (readonly, nonatomic) NSString *sheetType;
@property (readonly, nonatomic) NSString *overlayType;
@property (readonly, nonatomic) NSString *sourceElementIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)_setDocument:(id)a0;
- (id)initWithDocument:(id)a0 presentationOptions:(id)a1;

@end
