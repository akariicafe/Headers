@class NSString;

@interface MPModelPerson : MPModelObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasSocialPosts;

+ (id)__name_KEY;
+ (id)__hasSocialPosts_KEY;

@end
