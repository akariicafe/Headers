@interface DAMailboxSetFlagsRequest : DAMailboxRequest

@property (nonatomic) unsigned long long onFlags;
@property (nonatomic) unsigned long long offFlags;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initRequestWithSetFlags:(unsigned long long)a0 unsetFlags:(unsigned long long)a1 message:(id)a2;

@end
