@interface PDFAKAnnotationSerializationHelper : NSObject

+ (BOOL)_annotationClassHasSeniority:(id)a0;
+ (BOOL)_shouldUseAKAnnotation:(id)a0 toRepresentCGPDFDictionary:(struct CGPDFDictionary { } *)a1;
+ (void)addAKAnnotation:(id)a0 toAnnotationDictionary:(struct __CFDictionary { } *)a1;
+ (id)akAnnotationFromCGPDFAnnotation:(struct CGPDFAnnotation { } *)a0 andDictionary:(struct CGPDFDictionary { } *)a1;

@end
