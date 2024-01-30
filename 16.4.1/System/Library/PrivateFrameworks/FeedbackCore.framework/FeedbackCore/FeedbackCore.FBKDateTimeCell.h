@class NSString;

@interface FeedbackCore.FBKDateTimeCell : UITableViewCell <FBKDiffableCell> {
    void /* unknown type, empty encoding */ itemIdentifier;
}

@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic, weak) void /* unknown type, empty encoding */ questionLabel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ datePicker;
@property (nonatomic, weak) void /* unknown type, empty encoding */ editorDelegate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ question;
@property (nonatomic, retain) void /* unknown type, empty encoding */ answer;

+ (id)reuseIdentifier;

- (void)awakeFromNib;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)dateDidChange:(id)a0;

@end
