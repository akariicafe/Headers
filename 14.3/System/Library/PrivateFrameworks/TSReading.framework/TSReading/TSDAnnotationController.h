@class NSString;

@interface TSDAnnotationController : NSObject

@property (readonly, nonatomic) BOOL hasAnnotations;
@property (readonly, nonatomic) NSString *annotationNavigationString;
@property (nonatomic) BOOL textSelectionChangeShouldDismissAnnotations;

- (void)unregisterDelegate:(id)a0;
- (void)registerDelegate:(id)a0;
- (void)nextAnnotation:(id)a0;
- (void)previousAnnotation:(id)a0;
- (id)annotationNavigationTypeStringUsedForNavigating:(BOOL)a0;
- (void)willShowAnnotation:(id)a0;
- (void)didShowAnnotation:(id)a0;
- (void)commitCommentText:(id)a0 forAnnotation:(id)a1;

@end
