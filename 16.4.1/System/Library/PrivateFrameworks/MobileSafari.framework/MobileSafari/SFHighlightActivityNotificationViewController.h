@class NSString, CNContact, UILabel, CNAvatarViewController;

@interface SFHighlightActivityNotificationViewController : UIViewController {
    CNAvatarViewController *_contactViewController;
    UILabel *_subtitleLabel;
}

@property (readonly, copy, nonatomic) CNContact *contact;
@property (readonly, copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *messageText;

- (id)initWithContact:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithTitleText:(id)a0;

@end
