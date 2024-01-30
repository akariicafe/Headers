@class NSArray, NSMutableArray, NSDictionary;

@interface SXComponentDependencyResolver : NSObject {
    NSArray *_solvedComponentNodes;
    NSMutableArray *_componentNodes;
    NSDictionary *_mappedComponentNodes;
}

- (id)debugDescription;
- (void).cxx_destruct;

@end
