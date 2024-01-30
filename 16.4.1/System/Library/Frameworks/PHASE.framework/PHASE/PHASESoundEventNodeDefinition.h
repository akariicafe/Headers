@class NSArray;

@interface PHASESoundEventNodeDefinition : PHASEDefinition

@property (readonly, copy) NSArray *children;

+ (id)new;

- (id)init;
- (id)children;

@end
