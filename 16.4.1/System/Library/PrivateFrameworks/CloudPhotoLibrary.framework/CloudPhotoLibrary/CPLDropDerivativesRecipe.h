@class NSString, NSArray, NSDictionary;

@interface CPLDropDerivativesRecipe : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long sourceResourceType;
@property (readonly, nonatomic) unsigned long long changeType;
@property (readonly, nonatomic) NSString *uti;
@property (readonly, nonatomic) NSArray *derivativeTypes;
@property (readonly, nonatomic) NSDictionary *plistDescription;

+ (id)archiveArrayOfCPLDropDerivativeRecipes:(id)a0;
+ (unsigned long long)changeRecordTypeFromShortDescription:(id)a0;
+ (id)shortDescriptionForResourceChangeRecordType:(unsigned long long)a0;
+ (id)unarchiveArrayOfCPLDropDerivativeRecipesFrom:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSourceResourceType:(unsigned long long)a0 uti:(id)a1 changeType:(unsigned long long)a2 droppingDerivativeTypes:(id)a3;

@end
