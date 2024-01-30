@class NSString, NSURL;

@interface PFStoryConcreteRecipeAsset : NSObject <PFStoryRecipeAsset>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long kind;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *diagnosticDescription;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqualToAsset:(id)a0;
- (id)initWithIdentifier:(id)a0 kind:(long long)a1 url:(id)a2;

@end
