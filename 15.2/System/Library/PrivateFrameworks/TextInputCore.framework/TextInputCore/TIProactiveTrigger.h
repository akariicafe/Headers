@class NSDictionary;

@interface TIProactiveTrigger : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned char triggerSourceType;
@property (readonly, nonatomic) NSDictionary *attributes;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithSourceType:(unsigned char)a0 attributes:(id)a1;

@end
