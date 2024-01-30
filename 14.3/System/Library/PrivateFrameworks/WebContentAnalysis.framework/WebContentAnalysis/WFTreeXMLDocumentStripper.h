@class NSString, NSMutableDictionary, NSMutableArray;

@interface WFTreeXMLDocumentStripper : NSObject <WFWebPageProtocol> {
    struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *xmlDocument;
    NSString *pageTitle;
    NSMutableDictionary *metaTagsLabeled;
    NSMutableArray *metaTagsUnlabeled;
    NSMutableArray *scriptBlocks;
    NSMutableArray *images;
    NSString *pageContent;
    NSMutableArray *links;
    BOOL hasFrameset;
    BOOL hasShortRefresh;
}

+ (id)treeStripperWithXMLDocument:(struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)a0;

- (void)strip;
- (id)pageContent;
- (void)dealloc;
- (id)URLString;
- (id)description;
- (id)images;
- (id)pageTitle;
- (void)setPageTitle:(id)a0;
- (id)links;
- (id)initWithXMLDocument:(struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)a0;
- (void)setXMLDocument:(struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)a0;
- (void)processXMLDocument:(struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)a0;
- (id)processXMLDocument:(struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *)a0 blockComments:(BOOL)a1;
- (id)metaTagDescription;
- (id)metaTagKeywords;
- (id)metaTagsLabeled;
- (id)metaTagsUnlabeled;
- (id)scriptBlocks;
- (BOOL)hasFrameset;
- (BOOL)hasShortRefresh;
- (id)metaTagRating;

@end
