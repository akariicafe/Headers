@class CRRecentContact;

@interface CNRecentComposeRecipientGroup : CNComposeRecipientGroup

@property (readonly, retain, nonatomic) CRRecentContact *recentContact;

- (id)placeholderName;
- (void).cxx_destruct;
- (id)initWithChildren:(id)a0 displayString:(id)a1 recentContact:(id)a2;
- (id)label;
- (id)unlocalizedLabel;

@end
