@class CNContactFormatter, CNContact, CNContactMatchInfo, CNContactListStyleApplier;
@protocol CNCancelable;

@interface CNContactListTableViewCell : UITableViewCell

@property (retain, nonatomic) id<CNCancelable> summaryCancelationToken;
@property (nonatomic) BOOL hasBeenDisplayed;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNContactMatchInfo *contactMatchInfo;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (retain, nonatomic) CNContactListStyleApplier *contactListStyleApplier;
@property (nonatomic) BOOL isMeCard;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL isEmergencyContact;
@property (copy, nonatomic) id /* block */ selectedBackgroundViewConfiguration;

- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)cancelAsyncOperations;
- (void)setContactMatchInfo:(id)a0 completionBlock:(id /* block */)a1;

@end
