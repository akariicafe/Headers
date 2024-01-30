@interface CBCentral : CBPeer

@property (readonly, nonatomic) unsigned long long maximumUpdateValueLength;

- (unsigned long long)maximumUpdateValueLength;
- (id)description;

@end
