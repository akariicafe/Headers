@class TSWPTOCInfo;

@interface TSWPTOCAttachment : TSWPDrawableAttachment

@property (readonly, retain, nonatomic) TSWPTOCInfo *tocInfo;

- (void)wasRemovedFromDocumentRoot:(id)a0;
- (void)willBeAddedToDocumentRoot:(id)a0 dolcContext:(id)a1;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)loadTOCAttachmentMessage:(const void *)a0 fromUnarchiver:(id)a1;
- (void)saveTOCAttachmentMessage:(void *)a0 archiver:(id)a1;

@end
