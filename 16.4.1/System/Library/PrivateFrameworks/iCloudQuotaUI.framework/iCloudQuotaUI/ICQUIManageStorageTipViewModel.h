@class NSString, NSURL, AMSUIMessageRequest;

@interface ICQUIManageStorageTipViewModel : NSObject {
    NSString *_title;
    NSString *_subTitle;
    NSString *_systemIconName;
    NSString *_actionTitle;
    NSString *_actionIdentifier;
    NSString *_sectionID;
    NSString *_systemColor;
    NSURL *_deepLink;
}

@property (readonly, copy, nonatomic) AMSUIMessageRequest *request;

- (void).cxx_destruct;
- (id)initWithSectionAttributes:(id)a0;

@end
