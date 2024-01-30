@interface DAMailboxGetUpdatesRequest : DAMailboxRequest

@property (nonatomic) int maxSize;

- (unsigned long long)hash;
- (id)initRequestForBodyFormat:(int)a0 withBodySizeLimit:(int)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
