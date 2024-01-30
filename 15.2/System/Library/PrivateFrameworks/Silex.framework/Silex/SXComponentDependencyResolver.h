@class NSArray, NSMutableArray, NSDictionary;

@interface SXComponentDependencyResolver : NSObject {
    NSArray *_solvedComponentNodes;
    NSMutableArray *_componentNodes;
    NSDictionary *_mappedComponentNodes;
}

- (void).cxx_destruct;
- (id)debugDescription;

@end
