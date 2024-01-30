@class CRRecentContact;

@interface CNRecentComposeRecipient : CNComposeRecipient {
    CRRecentContact *_recent;
}

- (BOOL)isGroup;
- (id)placeholderName;
- (void).cxx_destruct;
- (id)preferredSendingAddress;
- (id)initWithRecentContact:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)recentContact;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
