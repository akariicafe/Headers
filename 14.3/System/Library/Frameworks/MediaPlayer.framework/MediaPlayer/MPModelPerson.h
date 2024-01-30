@class NSString;

@interface MPModelPerson : MPModelObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasSocialPosts;

+ (id)__hasSocialPosts_KEY;
+ (id)__name_KEY;

@end
