@class NSString;

@interface FeedbackCore.FBKSliderCell : UITableViewCell <FBKDiffableCell> {
    void /* unknown type, empty encoding */ itemIdentifier;
}

@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic, weak) void /* unknown type, empty encoding */ questionLabel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ answerLabel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ slider;
@property (nonatomic, weak) void /* unknown type, empty encoding */ editorDelegate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ question;
@property (nonatomic, retain) void /* unknown type, empty encoding */ answer;

+ (id)reuseIdentifier;

- (void)awakeFromNib;
- (void)sliderValueChanged:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)sliderTouchUpInside:(id)a0;
- (void)updateSliderAndLabel;

@end
