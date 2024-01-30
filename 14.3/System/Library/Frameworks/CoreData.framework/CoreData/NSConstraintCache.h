@class NSArray, NSMutableDictionary, NSEntityDescription, NSMutableArray;

@interface NSConstraintCache : NSObject {
    NSArray *_constraint;
    NSArray *_extension;
    NSEntityDescription *_entity;
    NSMutableDictionary *_knownValues;
    NSMutableArray *_children;
}

+ (void)createCachesForEntity:(id)a0 forValidator:(id)a1;

- (void)dealloc;
- (id)description;

@end
