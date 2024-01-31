@interface CBCentral : CBPeer

@property (readonly, nonatomic) unsigned long long maximumUpdateValueLength;

- (id)description;
- (unsigned long long)maximumUpdateValueLength;

@end
