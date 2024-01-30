@class NSUUID;

@interface ITAttentionAwarenessContext : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSUUID *identifier;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
