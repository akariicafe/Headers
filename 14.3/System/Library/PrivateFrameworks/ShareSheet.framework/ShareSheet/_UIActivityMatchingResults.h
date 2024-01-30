@class NSArray, NSMutableSet, _UIActivityMatchingContext;

@interface _UIActivityMatchingResults : NSObject {
    NSMutableSet *_excludedActivityTypesSet;
}

@property (retain, nonatomic) NSArray *orderedActivities;
@property (readonly, nonatomic) _UIActivityMatchingContext *context;
@property (readonly, nonatomic) NSArray *excludedActivityTypes;

- (void).cxx_destruct;
- (void)addExcludedActivityTypes:(id)a0;
- (id)initWithActivityMatchingContext:(id)a0;

@end
