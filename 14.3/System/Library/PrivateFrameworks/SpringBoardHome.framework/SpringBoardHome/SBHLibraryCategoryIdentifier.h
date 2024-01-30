@class NSString;

@interface SBHLibraryCategoryIdentifier : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _hash;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, nonatomic) unsigned long long predictionCategoryID;
@property (readonly, nonatomic) unsigned long long predictionCategoryIndex;

+ (id)categoryWithLocalizedDisplayName:(id)a0 categoryID:(unsigned long long)a1;
+ (id)categoryWithPredictionCategory:(id)a0 categoryID:(unsigned long long)a1 categoryIndex:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)initWithLocalizedDisplayName:(id)a0 predictionCategoryID:(unsigned long long)a1 categoryIndex:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;

@end
