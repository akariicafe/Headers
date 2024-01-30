@class NSString, LPImage, NSURL;

@interface NEIssueLinkPresentationSource : NSObject <UIActivityItemLinkPresentationSource>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) LPImage *linkPresentationImage;
@property (readonly, nonatomic) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)activityViewControllerLinkPresentationMetadata:(id)a0;
- (id)linkPresentationImageFromIssue:(id)a0;
- (id)titleFromIssue:(id)a0;
- (id)initWithIssue:(id)a0;
- (id)subtitleFromIssue:(id)a0;
- (id)urlFromIssue:(id)a0;

@end
