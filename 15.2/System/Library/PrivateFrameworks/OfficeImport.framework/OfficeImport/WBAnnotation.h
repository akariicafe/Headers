@interface WBAnnotation : NSObject

+ (unsigned long long)findStartFrom:(id)a0 annotation:(const struct WrdAnnotation { void /* function */ **x0; int x1; int x2; int x3; struct WrdAnnotationReferenceDescriptor *x4; struct WrdDateTime *x5; } *)a1;
+ (void)readFrom:(id)a0 at:(int)a1 paragraph:(id)a2;
+ (id)readRangedFrom:(id)a0 index:(unsigned int)a1 type:(int)a2 paragraph:(id)a3;

@end
