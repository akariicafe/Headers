@class NSString, NSNumber, NSArray;

@interface PRLikenessChange : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *changedLikenessID;
@property (copy, nonatomic) NSNumber *changedLikenessVersion;
@property (copy, nonatomic) NSArray *dirtyLikenessProperties;

+ (id)descriptionForChangeType:(unsigned long long)a0;
+ (id)changeForLikeness:(id)a0 withType:(unsigned long long)a1;
+ (unsigned long long)changeTypeFromDescription:(id)a0;

- (void).cxx_destruct;
- (id)description;

@end
