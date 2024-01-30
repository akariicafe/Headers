@class NSString;

@interface MPModelGroup : MPModelObject

@property (copy, nonatomic) NSString *title;

+ (long long)genericObjectType;
+ (id)kind;
+ (id)__title_KEY;

- (id)humanDescription;

@end
