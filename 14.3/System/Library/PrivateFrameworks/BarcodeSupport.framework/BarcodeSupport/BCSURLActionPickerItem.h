@class LSAppLink, NSURL, LSApplicationRecord;
@protocol BCSCodePayload;

@interface BCSURLActionPickerItem : BCSActionPickerItem {
    NSURL *_url;
    LSApplicationRecord *_applicationRecord;
}

@property (readonly, nonatomic) LSAppLink *appLink;
@property (readonly, nonatomic) id<BCSCodePayload> codePayload;

- (void)performAction;
- (void).cxx_destruct;
- (id)icon;
- (id)targetApplicationBundleIdentifier;
- (id)actionURL;
- (void)performActionWithFBOptions:(id)a0;
- (id)initWithLabel:(id)a0 action:(id)a1 url:(id)a2 applicationRecord:(id)a3;
- (id)initWithLabel:(id)a0 action:(id)a1 appLink:(id)a2 codePayload:(id)a3;

@end
