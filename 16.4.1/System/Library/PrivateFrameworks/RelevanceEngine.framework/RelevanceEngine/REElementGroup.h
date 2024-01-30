@class NSString;

@interface REElementGroup : NSObject <REAutomaticExportedInterface, NSCopying>

@property (readonly, nonatomic) NSString *groupIdentifier;
@property (nonatomic) unsigned long long behavior;
@property (nonatomic) long long maxElementCount;

+ (id)topElementGroupWithIdentifier:(id)a0;
+ (id)adjoiningElementGroupWithIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithGroupIdentifier:(id)a0;

@end
