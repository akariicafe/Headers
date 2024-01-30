@class NSUUID;

@interface ITAttentionAwarenessContext : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSUUID *identifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;

@end
