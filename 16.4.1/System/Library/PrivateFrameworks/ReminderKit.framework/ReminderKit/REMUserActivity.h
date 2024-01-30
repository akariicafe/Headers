@class NSData;

@interface REMUserActivity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSData *storage;

+ (id)dataFromUserActivity:(id)a0;
+ (id)stringForActivityType:(long long)a0;
+ (id)userActivityWithDictionaryData:(id)a0 error:(id *)a1;
+ (void)userActivityWithUserActivity:(id)a0 completion:(id /* block */)a1;

- (void)encodeWithCoder:(id)a0;
- (id)userActivityData;
- (id)initWithCoder:(id)a0;
- (id)initWithUserActivity:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)userActivity;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithUniversalLink:(id)a0;
- (id)initWithUserActivityData:(id)a0;
- (id)universalLink;
- (id)archivedDictionaryData;
- (id)debugDescriptionDetails;
- (id)initWithSiriIntent:(id)a0;
- (id)initWithType:(long long)a0 storage:(id)a1;
- (id)siriIntent;

@end
