@interface DAMailboxDeleteMessageRequest : DAMailboxRequest

- (unsigned long long)hash;
- (id)initRequestWithMessageID:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
