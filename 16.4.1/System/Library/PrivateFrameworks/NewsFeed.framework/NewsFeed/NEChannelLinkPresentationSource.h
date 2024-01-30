@class NSString, NSURL;

@interface NEChannelLinkPresentationSource : NSObject <UIActivityItemLinkPresentationSource>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)activityViewControllerLinkPresentationMetadata:(id)a0;
- (id)initWithChannel:(id)a0;

@end
