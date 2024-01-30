@class PDFAnnotation, PDFAnnotationChangePrivate;

@interface PDFAnnotationChange : NSObject {
    PDFAnnotationChangePrivate *_private;
}

@property (readonly, nonatomic) int changeType;
@property (readonly, retain, nonatomic) PDFAnnotation *annotation;
@property (readonly, nonatomic) unsigned long long changeTimestamp;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAddedAnnotation:(id)a0;
- (id)initWithChangedAnnotation:(id)a0;
- (id)initWithRemovedAnnotation:(id)a0;
- (id)initWithReorderedAnnotation:(id)a0;
- (id)initWithReorderedAndChangedAnnotation:(id)a0;

@end
