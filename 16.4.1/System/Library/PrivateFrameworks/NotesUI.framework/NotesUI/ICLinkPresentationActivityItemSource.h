@class NSString, LPLinkMetadata, LPFileMetadata;

@interface ICLinkPresentationActivityItemSource : NSObject <UIActivityItemLinkPresentationSource>

@property (retain, nonatomic) LPFileMetadata *fileMetadata;
@property (retain, nonatomic) LPLinkMetadata *linkMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)iconImage;
- (id)detail;
- (void)setIconImage:(id)a0;
- (id)title;
- (void).cxx_destruct;
- (id)activityViewControllerLinkPresentationMetadata:(id)a0;

@end
