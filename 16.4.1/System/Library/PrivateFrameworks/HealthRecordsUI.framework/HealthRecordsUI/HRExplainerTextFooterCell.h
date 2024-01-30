@class NSString;

@interface HRExplainerTextFooterCell : UITableViewCell {
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ content;
}

@property (class, nonatomic, readonly) NSString *reuseIdentifier;

@property (nonatomic, copy) NSString *content;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithReuseIdentifier:(id)a0;
- (void).cxx_destruct;

@end
