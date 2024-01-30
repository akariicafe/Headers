@class NSArray, NSDictionary, NSString, NSData;

@interface DESRecipe : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *attachments;
@property (readonly, copy, nonatomic) NSDictionary *parametersUsed;
@property (copy, nonatomic) NSString *recipeId;
@property (copy, nonatomic) NSString *recipeType;
@property (readonly, copy, nonatomic) NSDictionary *secureAggregationRecipeInfo;
@property (readonly, copy, nonatomic) NSDictionary *recipeUserInfo;
@property (readonly, copy, nonatomic) NSData *certificate;
@property (readonly, copy, nonatomic) NSArray *attachmentSignatures;
@property (readonly, nonatomic) BOOL supportsSecureAggregation;

+ (void)initialize;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithRecipeUserInfo:(id)a0 recipeId:(id)a1 recipeType:(id)a2;
- (id)_inithWithContentsOfFile:(id)a0 recipeId:(id)a1 recipeType:(id)a2 error:(id *)a3;
- (id)_initWithRecipeResponse:(id)a0 recipeId:(id)a1 recipeType:(id)a2 error:(id *)a3;

@end
