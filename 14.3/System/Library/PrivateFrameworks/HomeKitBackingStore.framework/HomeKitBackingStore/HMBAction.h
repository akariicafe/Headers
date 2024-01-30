@interface HMBAction : HMFObject <NSCopying, NSMutableCopying>

@property (nonatomic) BOOL shouldUpdateClients;

+ (id)shouldUpdateClientsAction;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
