@class NSMutableDictionary, NSURLSessionTaskDependencyDescription, NSNumber, NSMutableArray;

@interface __NSCFURLSessionTaskDependencyTreeNode : NSObject {
    NSURLSessionTaskDependencyDescription *dependencyDescription;
    NSMutableArray *children;
    NSMutableArray *childrenResourceIdentifiers;
    NSNumber *rootParentStreamID;
    NSMutableDictionary *_dependentToParentStreamIDs;
    NSMutableDictionary *_parentToParentStreamIDs;
}

- (void)dealloc;
- (id)init;

@end
