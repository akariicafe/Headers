@interface DAMailboxDeleteMessageRequest : DAMailboxRequest

- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initRequestWithMessageID:(id)a0;

@end
