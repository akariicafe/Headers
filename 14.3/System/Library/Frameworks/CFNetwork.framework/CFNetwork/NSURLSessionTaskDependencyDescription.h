@class NSString, __NSURLSessionTaskDependencyResourceIdentifier;

@interface NSURLSessionTaskDependencyDescription : NSObject {
    __NSURLSessionTaskDependencyResourceIdentifier *_dependent;
    __NSURLSessionTaskDependencyResourceIdentifier *_parent;
}

@property (nonatomic) float priority;
@property (nonatomic) BOOL exclusive;
@property (readonly) NSString *dependentURLPath;
@property (readonly) NSString *dependentMimeType;
@property (readonly) NSString *parentURLPath;
@property (readonly) NSString *parentMimeType;

+ (id)taskDependencyDescriptionWithURLPath:(id)a0 parentURLPath:(id)a1;
+ (id)taskDependencyDescriptionWithMimeType:(id)a0 parentMimeType:(id)a1;
+ (id)taskDependencyDescriptionWithParentURLPath:(id)a0;
+ (id)taskDependencyDescriptionWithURLPath:(id)a0 parentMimeType:(id)a1;
+ (id)taskDependencyDescriptionWithMimeType:(id)a0 parentURLPath:(id)a1;
+ (id)taskDependencyDescriptionWithParentMimeType:(id)a0;

- (void)dealloc;
- (id)description;

@end
