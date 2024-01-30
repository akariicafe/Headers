@class PDFAnnotation;

@interface PDFAnnotationEditMenuConfiguration : UIEditMenuConfiguration

@property (retain) PDFAnnotation *annotation;

+ (id)configurationWithIdentifier:(id)a0 sourcePoint:(struct CGPoint { double x0; double x1; })a1;

- (void).cxx_destruct;

@end
