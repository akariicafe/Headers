@class NSString;

@interface FCNetworkEventGroupKey : NSObject <NSCopying>

@property (nonatomic) int eventType;
@property (nonatomic) unsigned long long sessionID;
@property (retain, nonatomic) NSString *respondingPOP;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
