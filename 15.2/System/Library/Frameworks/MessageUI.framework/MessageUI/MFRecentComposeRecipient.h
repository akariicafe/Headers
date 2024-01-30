@class CRRecentContact;

@interface MFRecentComposeRecipient : MFComposeRecipient {
    CRRecentContact *_recent;
}

- (BOOL)isGroup;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)placeholderName;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)recentContact;
- (BOOL)isRemovableFromSearchResults;
- (id)preferredSendingAddress;
- (id)initWithRecentContact:(id)a0;

@end
