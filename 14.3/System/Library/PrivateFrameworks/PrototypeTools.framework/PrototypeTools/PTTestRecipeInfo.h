@class NSString, NSIndexSet;

@interface PTTestRecipeInfo : NSObject <NSSecureCoding> {
    NSString *_uniqueIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *domainIdentifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSIndexSet *events;
@property (readonly, nonatomic) NSString *recipeDescription;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithTestRecipe:(id)a0 domainInfo:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
