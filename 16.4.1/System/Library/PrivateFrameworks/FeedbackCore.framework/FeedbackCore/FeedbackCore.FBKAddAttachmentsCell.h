@class NSString, UIMenu;

@interface FeedbackCore.FBKAddAttachmentsCell : UITableViewCell <FBKDiffableCell> {
    void /* unknown type, empty encoding */ itemIdentifier;
    void /* unknown type, empty encoding */ button;
}

@property (class, nonatomic, readonly) BOOL supportsMenu;

@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic, retain) UIMenu *menu;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
