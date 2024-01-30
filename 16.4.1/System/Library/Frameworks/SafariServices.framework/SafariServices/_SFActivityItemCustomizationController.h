@class NSString;
@protocol _SFActivityItemCustomizationDelegate;

@interface _SFActivityItemCustomizationController : NSObject <UIActivityViewControllerObjectManipulationDelegate> {
    BOOL _contentTypeAllowedMap[5];
}

@property (weak, nonatomic) id<_SFActivityItemCustomizationDelegate> delegate;
@property (readonly, nonatomic) long long selectedContentType;
@property (readonly, nonatomic) BOOL canShareAsLink;
@property (readonly, nonatomic) BOOL canPrint;
@property (readonly, nonatomic) BOOL canShareAsDownload;
@property (readonly, nonatomic) BOOL canShareAsWebArchive;
@property (readonly, nonatomic) BOOL canShareAsStandaloneImage;
@property (readonly, nonatomic) BOOL canShareAsPDF;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (long long)_selectedIndex;
- (id)_customizationGroupsForActivityViewController:(id)a0;
- (id)_allowedContentTypes;
- (long long)_contentTypeForAllowedContentAtIndex:(long long)a0;
- (void)_customizationsDidChange;
- (void)_ensureSelectedContentTypeIsAllowed;

@end
