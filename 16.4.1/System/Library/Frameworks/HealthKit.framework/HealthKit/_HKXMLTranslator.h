@interface _HKXMLTranslator : NSObject {
    struct _xsltStylesheet { struct _xsltStylesheet *x0; struct _xsltStylesheet *x1; struct _xsltStylesheet *x2; struct _xsltDocument *x3; struct _xmlDoc *x4; struct _xmlHashTable *x5; int x6; struct _xmlHashTable *x7; struct _xsltStackElem *x8; struct _xsltTemplate *x9; struct _xmlHashTable *x10; struct _xsltCompMatch *x11; struct _xsltCompMatch *x12; struct _xsltCompMatch *x13; struct _xsltCompMatch *x14; struct _xsltCompMatch *x15; struct _xsltCompMatch *x16; struct _xsltCompMatch *x17; struct _xsltCompMatch *x18; struct _xmlHashTable *x19; struct _xmlHashTable *x20; struct _xmlHashTable *x21; void *x22; void *x23; char *x24; char *x25; char *x26; char *x27; int x28; struct _xsltDecimalFormat *x29; int x30; char *x31; char *x32; int x33; char *x34; struct _xsltElemPreComp *x35; int x36; int x37; char *x38; char **x39; int x40; int x41; void *x42; struct _xmlHashTable *x43; int x44; struct _xsltDocument *x45; struct _xmlDict *x46; void *x47; char *x48; int x49; int x50; int x51; struct _xsltStylesheet *x52; int x53; struct _xmlHashTable *x54; struct _xmlXPathContext *x55; } *_stylesheet;
}

- (void)dealloc;
- (id)_localizeXSL:(id)a0 localizationTableName:(id)a1 localizationOverride:(id)a2;
- (id)convertToHTMLFromXML:(id)a0;
- (id)initWithXSL:(id)a0 localizationTableName:(id)a1 localizationOverride:(id)a2;

@end
