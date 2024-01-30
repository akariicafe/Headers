@class CRRecentContact;

@interface MFRecentComposeRecipient : MFComposeRecipient {
    CRRecentContact *_recent;
}

- (BOOL)isGroup;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)placeholderName;
- (BOOL)isRemovableFromSearchResults;
- (id)recentContact;
- (id)initWithRecentContact:(id)a0;
- (id)preferredSendingAddress;

@end
