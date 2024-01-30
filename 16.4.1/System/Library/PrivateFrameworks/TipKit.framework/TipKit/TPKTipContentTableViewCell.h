@class TPKContentView;

@interface TPKTipContentTableViewCell : UITableViewCell <TPKTipContentReusableView>

@property (nonatomic, retain) void /* unknown type, empty encoding */ tipView;
@property (nonatomic, readonly) TPKContentView *tipContentView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)_bridgedUpdateConfigurationUsingState:(id)a0;
- (void)setContent:(id)a0 contentController:(id)a1;

@end
