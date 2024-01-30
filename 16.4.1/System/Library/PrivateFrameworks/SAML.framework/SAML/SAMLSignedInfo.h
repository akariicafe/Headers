@class NSString, NSNumber, NSArray;

@interface SAMLSignedInfo : SAMLBaseElement

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *canonicalizationMethod;
@property (readonly, nonatomic) NSNumber *signatureMethodLength;
@property (readonly, nonatomic) NSString *signatureMethod;
@property (readonly, nonatomic) NSArray *references;

+ (id)createElement:(id *)a0;

- (struct _xmlNode { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; struct _xmlNs *x9; char *x10; struct _xmlAttr *x11; struct _xmlNs *x12; void *x13; unsigned short x14; unsigned short x15; } *)xmlNode:(id *)a0;

@end
