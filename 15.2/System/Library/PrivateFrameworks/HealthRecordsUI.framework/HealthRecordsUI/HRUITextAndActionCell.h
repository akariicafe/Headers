@class NSString;

@interface HRUITextAndActionCell : UITableViewCell {
    void /* unknown type, empty encoding */ explanationLabel;
    void /* unknown type, empty encoding */ explanation;
    void /* unknown type, empty encoding */ actionTitle;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ actionButton;
@property (nonatomic, copy) NSString *explanation;
@property (nonatomic, copy) NSString *actionTitle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
