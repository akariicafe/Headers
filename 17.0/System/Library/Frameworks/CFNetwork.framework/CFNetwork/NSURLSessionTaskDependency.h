@class NSURLSessionTaskDependencyDescription, NSURLSessionTask;

@interface NSURLSessionTaskDependency : NSObject

@property (retain, nonatomic) NSURLSessionTaskDependencyDescription *taskDependencyDescription;
@property (readonly, retain, nonatomic) NSURLSessionTask *parentTask;
@property (readonly, retain, nonatomic) NSURLSessionTask *mainDocumentTask;

+ (id)taskDependencyWithMainDocumentTask:(id)a0;
+ (id)taskDependencyWithMainDocumentTask:(id)a0 taskDependencyDescription:(id)a1;
+ (id)taskDependencyWithParentTask:(id)a0 priority:(float)a1 exclusive:(BOOL)a2;

- (id)init;
- (void)dealloc;

@end
