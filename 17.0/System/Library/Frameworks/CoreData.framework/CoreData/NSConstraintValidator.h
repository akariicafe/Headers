@class NSArray, _PFModelMap;

@interface NSConstraintValidator : NSObject {
    _PFModelMap *_modelMap;
    NSArray *_entities;
    id *_cachesByEntity;
}

- (void)dealloc;

@end
