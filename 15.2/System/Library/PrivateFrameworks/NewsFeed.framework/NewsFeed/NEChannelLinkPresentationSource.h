@class NSString, NSURL;

@interface NEChannelLinkPresentationSource : NSObject <UIActivityItemLinkPresentationSource>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)activityViewControllerLinkPresentationMetadata:(id)a0;
- (void).cxx_destruct;
- (id)initWithChannel:(id)a0;

@end
