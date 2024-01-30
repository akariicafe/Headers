@interface DAMailboxFetchMessageRequest : DAMailboxRequest

@property (nonatomic) int maxSize;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initRequestForBodyFormat:(int)a0 withMessageID:(id)a1 withBodySizeLimit:(int)a2;

@end
