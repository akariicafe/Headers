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
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)loadView;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithSheetDelegate:(id)a0;
- (void)updateMentions;
- (void)setMentions:(id)a0;
- (id)mentions;
- (void)completeWithSelectedMention:(id)a0;
- (void)chooseRow:(long long)a0;

@end
