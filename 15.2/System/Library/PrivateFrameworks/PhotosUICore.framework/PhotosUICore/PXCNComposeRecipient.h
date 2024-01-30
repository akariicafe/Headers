@class CNComposeRecipient;

@interface PXCNComposeRecipient : PXRecipient

@property (readonly, nonatomic) CNComposeRecipient *recipient;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRecipient:(id)a0;
- (id)initWithContact:(id)a0 address:(id)a1 nameComponents:(id)a2 recipientKind:(long long)a3;

@end
