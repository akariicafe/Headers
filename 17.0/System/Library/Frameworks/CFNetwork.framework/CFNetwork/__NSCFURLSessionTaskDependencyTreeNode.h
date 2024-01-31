@class NSMutableDictionary, NSURLSessionTaskDependencyDescription, NSNumber, NSMutableArray;

@interface __NSCFURLSessionTaskDependencyTreeNode : NSObject {
    NSURLSessionTaskDependencyDescription *dependencyDescription;
    NSMutableArray *children;
    NSMutableArray *childrenResourceIdentifiers;
    NSNumber *rootParentStreamID;
    NSMutableDictionary *_dependentToParentStreamIDs;
    NSMutableDictionary *_parentToParentStreamIDs;
}

- (id)init;
- (void)dealloc;

@end
