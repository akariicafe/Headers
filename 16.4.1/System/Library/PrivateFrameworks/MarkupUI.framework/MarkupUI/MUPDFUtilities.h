@interface MUPDFUtilities : NSObject

+ (id)createDictionaryFromPDFDictionary:(struct CGPDFDictionary { } *)a0;
+ (id)createPDFDateString:(id)a0;
+ (long long)exifOrientationOfPage:(struct CGPDFPage { } *)a0;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })flattenRotationTransformForPage:(struct CGPDFPage { } *)a0 outMediaBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 outCropBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
+ (unsigned long long)indexOfDictionary:(struct CGPDFDictionary { } *)a0 inArray:(struct CGPDFArray { } *)a1;
+ (unsigned long long)normalizedRotationAngleOfPage:(struct CGPDFPage { } *)a0;

@end
