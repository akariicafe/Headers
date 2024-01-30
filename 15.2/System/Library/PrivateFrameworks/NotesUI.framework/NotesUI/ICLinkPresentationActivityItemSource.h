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
- (id)title;
- (id)activityViewControllerLinkPresentationMetadata:(id)a0;
- (void)setIconImage:(id)a0;
- (void).cxx_destruct;

@end
