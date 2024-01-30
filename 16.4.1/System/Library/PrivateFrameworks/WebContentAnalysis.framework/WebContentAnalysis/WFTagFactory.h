@class NSMutableDictionary;

@interface WFTagFactory : NSObject {
    NSMutableDictionary *sharedTags;
}

+ (id)defaultFactory;
+ (id)tagsForWebpage:(id)a0;

- (void)dealloc;
- (id)init;
- (id)tagWithClass:(Class)a0 webpage:(id)a1;

@end
