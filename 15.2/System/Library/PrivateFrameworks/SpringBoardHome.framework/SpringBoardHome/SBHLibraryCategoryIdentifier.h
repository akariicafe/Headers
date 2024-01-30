@class NSString;

@interface SBHLibraryCategoryIdentifier : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _hash;
    NSString *_localizedDisplayName;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *localizedDisplayNameKey;
@property (readonly, nonatomic) unsigned long long predictionCategoryID;
@property (readonly, nonatomic) unsigned long long predictionCategoryIndex;

+ (id)categoryWithLocalizedDisplayName:(id)a0 categoryID:(unsigned long long)a1 categoryIndex:(long long)a2;

- (id)localizedDisplayName;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPredictionCategoryID:(unsigned long long)a0 categoryIndex:(unsigned long long)a1 localizedDisplayName:(id)a2 localizedDisplayNameKey:(id)a3;
- (BOOL)isEqualToCategoryIdentifier:(id)a0;
- (id)initWithPredictionCategoryID:(unsigned long long)a0 localizedDisplayNameKey:(id)a1;
- (id)succinctDescription;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithPredictionCategory:(id)a0 categoryIndex:(unsigned long long)a1;
- (unsigned long long)hash;

@end
