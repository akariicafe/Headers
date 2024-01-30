@class CRRecentContact;

@interface MFRecentComposeRecipientGroup : MFComposeRecipientGroup

@property (readonly, retain, nonatomic) CRRecentContact *recentContact;

- (id)placeholderName;
- (id)label;
- (void).cxx_destruct;
- (id)unlocalizedLabel;
- (id)initWithChildren:(id)a0 displayString:(id)a1 recentContact:(id)a2;

@end
