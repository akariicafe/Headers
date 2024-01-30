@interface DAMailboxFetchMessageRequest : DAMailboxRequest

@property (nonatomic) int maxSize;

- (unsigned long long)hash;
- (id)initRequestForBodyFormat:(int)a0 withMessageID:(id)a1 withBodySizeLimit:(int)a2;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
