@class NSString, NSMutableArray, WDDocument;

@interface WDCitation : NSObject

@property (retain, nonatomic) NSString *year;
@property (retain, nonatomic) NSMutableArray *authors;
@property (retain, nonatomic) NSString *sourceType;
@property (retain, nonatomic) NSMutableArray *titles;
@property (retain, nonatomic) NSString *periodicalTitle;
@property (retain, nonatomic) NSString *volume;
@property (retain, nonatomic) NSString *number;
@property (retain, nonatomic) NSString *section;
@property (retain, nonatomic) NSString *pubDate;
@property (retain, nonatomic) NSMutableArray *urls;
@property (retain, nonatomic) NSString *pages;
@property (readonly, weak) WDDocument *document;

+ (id)refTypeEnumMap;
+ (id)wordRefTypeEnumMap;
+ (struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)nodeAtPath:(id)a0 nodePtr:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a1;
+ (struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)trimStyle:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0;
+ (id)endNoteStringForRefType:(int)a0;
+ (int)refTypeForWordString:(id)a0;
+ (id)wordStringForRefType:(int)a0;
+ (id)subStringOf:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a0 forPath:(id)a1;
+ (id)stringValueForNodeAtPath:(id)a0 nodePtr:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a1 trimStyle:(BOOL)a2;
+ (id)stringValuesForNodesAtPath:(id)a0 nodePtr:(struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)a1 trimStyle:(BOOL)a2;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDocument:(id)a0;

@end
