@class NSData, EQKitEnvironment;
@protocol EQKitExpression;

@interface EQKitEquation : NSObject {
    NSData *mSource;
}

@property (readonly, nonatomic) id<EQKitExpression> root;
@property (readonly, nonatomic) EQKitEnvironment *environment;

+ (id)equationWithData:(id)a0 format:(int)a1 environment:(id)a2 error:(id *)a3;
+ (int)formatFromData:(id)a0;
+ (int)formatFromString:(id)a0;
+ (id)equationWithString:(id)a0 format:(int)a1 environment:(id)a2 error:(id *)a3;
+ (id)equationWithString:(id)a0 format:(int)a1 error:(id *)a2;
+ (id)equationWithXMLDoc:(struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)a0 node:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a1 environment:(id)a2 error:(id *)a3;
+ (id)equationSourceFromPDFDocument:(struct CGPDFDocument { } *)a0;
+ (id)mathMLStringFromLaTeXString:(id)a0 environment:(id)a1 error:(id *)a2;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithRoot:(id)a0 source:(id)a1;
- (id)newLayout;
- (id)pdfDataWithLayout:(id)a0 layoutContext:(id)a1;
- (BOOL)isBaseFontNameUsed;
- (BOOL)exportToXMLWriter:(struct _xmlTextWriter { } *)a0 ns:(const char *)a1 prefix:(const char *)a2 characterCount:(int *)a3;
- (id)pdfDataWithLayoutContext:(id)a0 baselineOffset:(double *)a1;

@end
