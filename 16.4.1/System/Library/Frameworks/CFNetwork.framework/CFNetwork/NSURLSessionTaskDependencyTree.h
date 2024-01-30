@class NSURL, NSMutableDictionary, __NSCFURLSessionTaskDependencyTreeNode;

@interface NSURLSessionTaskDependencyTree : NSObject {
    NSMutableDictionary *_dependencies;
    __NSCFURLSessionTaskDependencyTreeNode *_effectiveTree;
}

@property (retain, nonatomic) NSURL *mainDocumentURL;

+ (id)dependencyTreeDefaultWeb;
+ (id)dependencyTreeWithJSONData:(id)a0 error:(id *)a1;
+ (id)dependencyTreeWithMainDocumentURL:(id)a0 dependencyDescriptions:(id)a1;

- (void)dealloc;

@end
