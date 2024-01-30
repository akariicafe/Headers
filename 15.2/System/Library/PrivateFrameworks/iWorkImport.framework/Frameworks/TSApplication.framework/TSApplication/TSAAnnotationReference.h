@protocol TSKAnnotation;

@interface TSAAnnotationReference : NSObject

@property (retain, nonatomic) id<TSKAnnotation> annotation;
@property (nonatomic) unsigned long long pageIndex;

- (void).cxx_destruct;
- (BOOL)referencesAnnotation:(id)a0;
- (BOOL)isValidAndInDocument;

@end
