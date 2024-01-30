@class NSURL, NSString;

@interface NEFilterBlockPage : NSObject {
    NSString *_organization;
}

@property (readonly) NSURL *pageTemplateURL;
@property (copy) NSString *userURL;
@property (copy) NSString *formActionURL;
@property (copy) NSString *organization;
@property (copy) NSString *unblockStyle;
@property (copy) NSString *remediationButtonText;

- (id)page;
- (id)_css;
- (void).cxx_destruct;
- (id)init;
- (id)_blockPage;

@end
