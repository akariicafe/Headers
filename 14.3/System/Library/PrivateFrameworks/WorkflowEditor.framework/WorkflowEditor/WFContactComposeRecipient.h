@class WFContact;

@interface WFContactComposeRecipient : CNComposeRecipient

@property (readonly, nonatomic) WFContact *wfContact;

- (void).cxx_destruct;
- (id)displayString;
- (id)initWithWFContact:(id)a0;
- (id)wf_contactFieldEntry;

@end
