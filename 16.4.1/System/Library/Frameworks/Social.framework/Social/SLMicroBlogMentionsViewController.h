@class NSString, NSArray, NSObject, UITableView;
@protocol SLMicroBlogSheetDelegate, SLMicroBlogMentionsDelegate;

@interface SLMicroBlogMentionsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    NSObject<SLMicroBlogSheetDelegate> *_sheetDelegate;
    NSArray *_mentions;
    NSString *_searchString;
    UITableView *_tableView;
}

@property (weak, nonatomic) NSObject<SLMicroBlogMentionsDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_blankSurrogateProfileImage;

- (void)setSearchString:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)loadView;
- (void)chooseRow:(long long)a0;
- (void)completeWithSelectedMention:(id)a0;
- (id)initWithSheetDelegate:(id)a0;
- (id)mentions;
- (void)setMentions:(id)a0;
- (void)updateMentions;

@end
