@class LPLinkMetadata, NSString, NSURL, LPImage;

@interface LPLinkMetadataPresentationTransformer : NSObject

@property (copy, nonatomic) LPLinkMetadata *metadata;
@property (copy, nonatomic) NSURL *URL;
@property (nonatomic, getter=isComplete) BOOL complete;
@property (nonatomic) BOOL allowsTapToLoad;
@property (nonatomic) BOOL allowsTapping;
@property (nonatomic) unsigned long long preferredSizeClass;
@property (retain, nonatomic) LPImage *sourceContextIcon;
@property (copy, nonatomic) NSString *sourceBundleIdentifier;
@property (nonatomic) double scaleFactor;
@property (readonly, copy, nonatomic) NSURL *originalURL;
@property (readonly, copy, nonatomic) NSURL *canonicalURL;
@property (readonly, nonatomic) BOOL hasMedia;

- (id)domainName;
- (void)_populateProperties:(id)a0 withPrimaryIcon:(id)a1 iconProperties:(id)a2;
- (BOOL)_prefersImageAsIconWithStyle:(long long)a0;
- (id)init;
- (BOOL)shouldUseAppClipPresentation;
- (id)titleForStyle:(long long)a0;
- (id)subtitleForStyle:(long long)a0;
- (id)videoForStyle:(long long)a0;
- (id)quotedTextForStyle:(long long)a0;
- (long long)rendererStyle;
- (id)mainCaptionBarForStyle:(long long)a0;
- (id)backgroundColorForStyle:(long long)a0;
- (id)imageForStyle:(long long)a0 icon:(id *)a1 alternateImages:(id *)a2;
- (id)audioForStyle:(long long)a0;
- (BOOL)_prefersLeadingIconWithStyle:(long long)a0;
- (BOOL)_prefersIconAsImage;
- (void).cxx_destruct;
- (id)presentationProperties;
- (id)commonPresentationPropertiesForStyle:(long long)a0;
- (void)_populateProperties:(id)a0 withPrimaryImage:(id)a1;
- (void)_populateProperties:(id)a0 withPrimaryIcon:(id)a1;
- (unsigned long long)_rowConfiguration;
- (id)unspecializedPresentationProperties;
- (id)domainNameForIndicator;
- (id)unspecializedPresentationPropertiesForStyle:(long long)a0;

@end
