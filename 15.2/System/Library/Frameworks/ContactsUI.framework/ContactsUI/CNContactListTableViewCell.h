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

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setContactMatchInfo:(id)a0 completionBlock:(id /* block */)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)dealloc;
- (void)cancelAsyncOperations;

@end
