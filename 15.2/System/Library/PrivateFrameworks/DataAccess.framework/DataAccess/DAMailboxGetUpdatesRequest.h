@interface DAMailboxGetUpdatesRequest : DAMailboxRequest

@property (nonatomic) int maxSize;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initRequestForBodyFormat:(int)a0 withBodySizeLimit:(int)a1;

@end
