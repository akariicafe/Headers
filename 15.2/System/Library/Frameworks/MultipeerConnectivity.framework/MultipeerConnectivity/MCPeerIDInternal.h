@class NSString;

@interface MCPeerIDInternal : NSObject

@property (readonly, nonatomic) NSString *idString;
@property (readonly, nonatomic) unsigned long long pid64;
@property (readonly, nonatomic) NSString *displayName;

- (void)dealloc;
- (id)initWithIDString:(id)a0 pid64:(unsigned long long)a1 displayName:(id)a2;

@end
