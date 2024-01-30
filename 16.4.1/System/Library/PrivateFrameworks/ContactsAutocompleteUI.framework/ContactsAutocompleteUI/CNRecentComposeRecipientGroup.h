@class CRRecentContact;

@interface CNRecentComposeRecipientGroup : CNComposeRecipientGroup

@property (readonly, retain, nonatomic) CRRecentContact *recentContact;

- (id)label;
- (void).cxx_destruct;
- (id)placeholderName;
- (id)unlocalizedLabel;
- (id)initWithChildren:(id)a0 displayString:(id)a1 recentContact:(id)a2;

@end
