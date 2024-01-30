@class NSString, UIViewController, UITraitCollection;
@protocol NUDocumentSectionItemHeightProvider;

@interface NUDocumentSectionItem : NSObject <SXDocumentSectionItemProvider>

@property (readonly) UIViewController *viewController;
@property (readonly) UITraitCollection *traitCollection;
@property (readonly) id<NUDocumentSectionItemHeightProvider> heightProvider;
@property (readonly) double sectionHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
