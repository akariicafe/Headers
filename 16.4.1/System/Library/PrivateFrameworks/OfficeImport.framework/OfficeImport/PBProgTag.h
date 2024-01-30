@interface PBProgTag : NSObject

+ (id)readMacCharStyleFromClientData:(id)a0;
+ (id)binaryTagDataWithName:(const unsigned short *)a0 inProgTags:(id)a1;
+ (id)binaryTagDataWithName:(const unsigned short *)a0 inProgTagsParent:(id)a1;
+ (id)ensureBinaryTagDataWithName:(const unsigned short *)a0 inProgTags:(id)a1;
+ (id)ensureBinaryTagDataWithName:(const unsigned short *)a0 inProgTagsParent:(id)a1;
+ (void)readBulletImagesFromContainerParent:(id)a0 state:(id)a1;
+ (void)readBulletImagesFromDocumentList:(id)a0 state:(id)a1;
+ (id)readBulletStyleFromClientData:(id)a0;
+ (void)readBulletStylesFromDocumentList:(id)a0 state:(id)a1;
+ (void)readBulletStylesFromMainMaster:(id)a0 state:(id)a1;
+ (void)readClientData:(id)a0 state:(id)a1;
+ (void)readDocumentList:(id)a0 state:(id)a1;
+ (void)readHyperlinkScreenTipsFromDocumentList:(id)a0 state:(id)a1;
+ (void)readMacCharStylesFromDocumentList:(id)a0 state:(id)a1;
+ (const struct PBTextFormatProgTagInfo { unsigned short *x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } *)textFormatInfoForProgTagName:(const unsigned short *)a0;

@end
