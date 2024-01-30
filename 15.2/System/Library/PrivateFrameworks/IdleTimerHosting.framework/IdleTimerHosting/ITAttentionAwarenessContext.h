@class NSUUID;

@interface ITAttentionAwarenessContext : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSUUID *identifier;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
