@class LSAppLink, NSURL, LSApplicationRecord;
@protocol BCSCodePayload;

@interface BCSURLActionPickerItem : BCSActionPickerItem {
    NSURL *_url;
    LSApplicationRecord *_applicationRecord;
    BOOL _preferApplicationIcon;
}

@property (readonly, nonatomic) LSAppLink *appLink;
@property (readonly, nonatomic) id<BCSCodePayload> codePayload;

- (id)icon;
- (void)performAction;
- (id)actionURL;
- (void).cxx_destruct;
- (id)targetApplicationBundleIdentifier;
- (id)initWithLabel:(id)a0 action:(id)a1 appLink:(id)a2 codePayload:(id)a3 preferApplicationIcon:(BOOL)a4;
- (id)initWithLabel:(id)a0 action:(id)a1 appLink:(id)a2 codePayload:(id)a3;
- (id)initWithLabel:(id)a0 action:(id)a1 url:(id)a2 applicationRecord:(id)a3;
- (id)initWithLabel:(id)a0 action:(id)a1 url:(id)a2 applicationRecord:(id)a3 preferApplicationIcon:(BOOL)a4;
- (void)performActionWithFBOptions:(id)a0;
- (BOOL)useInlineMenu;

@end
