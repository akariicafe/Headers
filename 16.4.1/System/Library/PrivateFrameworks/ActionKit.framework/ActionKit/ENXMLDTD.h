@class NSString;

@interface ENXMLDTD : NSObject {
    struct _xmlDtd { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlDoc *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; void *x9; void *x10; void *x11; void *x12; char *x13; char *x14; void *x15; } *_dtd;
}

@property (class, readonly, nonatomic) ENXMLDTD *enexDTD;
@property (class, readonly, nonatomic) ENXMLDTD *enml2dtd;
@property (class, readonly, nonatomic) ENXMLDTD *lat1DTD;
@property (class, readonly, nonatomic) ENXMLDTD *symbolDTD;
@property (class, readonly, nonatomic) ENXMLDTD *specialDTD;

@property (retain, nonatomic) NSString *docTypeDeclaration;

+ (void)initialize;
+ (id)dtdWithBundleResource:(id)a0 ofType:(id)a1;

- (id)initWithContentsOfFile:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (struct _xmlEntity { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlDtd *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; char *x9; char *x10; int x11; int x12; char *x13; char *x14; struct _xmlEntity *x15; char *x16; int x17; int x18; } *)xmlEntityNamed:(id)a0;
- (BOOL)isElementLegal:(id)a0;
- (id)sanitizedAttributes:(id)a0 forElement:(id)a1;
- (BOOL)isAttributeLegal:(id)a0 inElement:(id)a1;
- (struct _xmlElement { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlDtd *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; struct _xmlElementContent *x10; struct _xmlAttribute *x11; char *x12; struct _xmlRegexp *x13; } *)xmlElementNamed:(id)a0;

@end
