@class NSMutableDictionary;

@interface WFTagFactory : NSObject {
    NSMutableDictionary *sharedTags;
}

+ (id)defaultFactory;
+ (id)tagsForWebpage:(id)a0;

- (id)init;
- (void)dealloc;
- (id)tagWithClass:(Class)a0 webpage:(id)a1;

@end
