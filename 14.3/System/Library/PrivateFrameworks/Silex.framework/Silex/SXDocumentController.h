@class SXDocument, SXMetadata, SXImageController, NSArray, NSString, NSMutableDictionary, SXJSONObjectMerger, UIColor;

@interface SXDocumentController : NSObject <SXDocumentShareURLProvider>

@property (readonly, nonatomic) SXJSONObjectMerger *componentStyleMerger;
@property (retain, nonatomic) SXImageController *imageController;
@property (retain, nonatomic) NSMutableDictionary *componentStyles;
@property (readonly, nonatomic) SXDocument *document;
@property (readonly, nonatomic) SXMetadata *metadata;
@property (readonly, nonatomic) UIColor *documentBackgroundColor;
@property (readonly, nonatomic) UIColor *topBackgroundColor;
@property (readonly, nonatomic) NSArray *allImageResources;
@property (readonly, nonatomic) NSArray *requiredResourceURLs;
@property (readonly, nonatomic) NSString *shareURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)componentLayoutForIdentifier:(id)a0;
- (id)resourceForIdentifier:(id)a0;
- (id)componentStyleForComponent:(id)a0;
- (id)imageResourceForIdentifier:(id)a0;
- (id)initWithDocument:(id)a0 shareURL:(id)a1;
- (id)mergedObjectsWithIdentifiers:(id)a0 fromDictionary:(id)a1 merger:(id)a2;
- (id)largestImageResourceForImageIdentifier:(id)a0;
- (id)filterImageResources;
- (id)componentIdentifierUsingThumbnailInComponents:(id)a0;
- (id)componentIdentifierUsingThumbnail;

@end
