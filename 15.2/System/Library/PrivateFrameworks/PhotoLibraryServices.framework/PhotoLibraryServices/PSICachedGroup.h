@class NSString;

@interface PSICachedGroup : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, nonatomic) unsigned long long owningGroupId;
@property (nonatomic) unsigned long long groupId;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithText:(id)a0 identifier:(id)a1 category:(unsigned long long)a2 owningGroupId:(unsigned long long)a3;

@end
