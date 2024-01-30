@class NSDictionary, NSArray;

@interface HFItemUpdateOutcome : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic) unsigned long long outcomeType;
@property (readonly, nonatomic) NSDictionary *results;
@property (readonly, nonatomic) NSArray *allKeys;

+ (id)outcomeWithResults:(id)a0;

- (id)initWithResults:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithResults:(id)a0 type:(unsigned long long)a1;

@end
