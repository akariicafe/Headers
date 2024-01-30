@class NSURL, NSMutableDictionary, __NSCFURLSessionTaskDependencyTreeNode;

@interface NSURLSessionTaskDependencyTree : NSObject {
    NSMutableDictionary *_dependencies;
    __NSCFURLSessionTaskDependencyTreeNode *_effectiveTree;
}

@property (retain, nonatomic) NSURL *mainDocumentURL;

+ (id)dependencyTreeWithMainDocumentURL:(id)a0 dependencyDescriptions:(id)a1;
+ (id)dependencyTreeWithJSONData:(id)a0 error:(id *)a1;
+ (id)dependencyTreeDefaultWeb;

- (void)dealloc;

@end
