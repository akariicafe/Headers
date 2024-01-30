@interface PBPresentation : NSObject

+ (void)addHeadersFootersToDocumentContainer:(id)a0 instance:(int)a1;
+ (id)drawingGroupHolderWithDocumentContainerHolder:(id)a0;
+ (void)processLayoutTypesFromDocument:(id)a0 masterLayoutMap:(id)a1 state:(id)a2;
+ (void)readCommentAuthorsFrom:(id)a0 state:(id)a1;
+ (void)readDefaultTextListStyle:(id)a0 fromDocumentContainer:(id)a1 state:(id)a2;
+ (void)readFrom:(void *)a0 to:(id)a1 cancel:(id)a2 asThumbnail:(BOOL)a3 delegate:(id)a4;
+ (void)readMasterAndLayouts:(id)a0 masterLayoutMap:(id)a1 state:(id)a2;
+ (void)readNotes:(id)a0 masterLayoutMap:(id)a1 slideIdMap:(id)a2 state:(id)a3 delegate:(id)a4;
+ (void)readSlideListWithInstance:(int)a0 documentContainerHolder:(id)a1 state:(id)a2 block:(id /* block */)a3;
+ (void)readSlides:(id)a0 masterLayoutMap:(id)a1 slideIdMap:(id)a2 state:(id)a3 isThumbnail:(BOOL)a4 delegate:(id)a5;
+ (void)readTextStyleFromNotesMaster:(id)a0 toNotesMaster:(id)a1 slideMaster:(id)a2 state:(id)a3;
+ (void)readTextStylesFromSlideMaster:(id)a0 toSlideMaster:(id)a1 state:(id)a2;
+ (void)readThemeFromSlideMaster:(id)a0 document:(id)a1 theme:(id)a2 colorMap:(id)a3 state:(id)a4;
+ (void)readXmlLayoutsFromSlideMaster:(id)a0 document:(id)a1 masterInfo:(id)a2 state:(id)a3;
+ (void)scanSlideListForLayoutTypes:(id)a0 slideListHolder:(id)a1 masterLayoutMap:(id)a2;
+ (void)setDefaultTextStyleWithEnvironmentHolder:(id)a0 state:(id)a1;
+ (void)setFontEntites:(id)a0 environmentHolder:(id)a1;

@end
