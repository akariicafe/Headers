@class NSDictionary;

@interface TIProactiveTrigger : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned char triggerSourceType;
@property (readonly, nonatomic) NSDictionary *attributes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithSourceType:(unsigned char)a0 attributes:(id)a1;

@end
