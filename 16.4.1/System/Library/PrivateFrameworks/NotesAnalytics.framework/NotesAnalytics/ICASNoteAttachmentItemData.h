@class NSString, NSNumber;

@interface ICASNoteAttachmentItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentDocScan;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentInlineDrawingV1;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentInlineDrawingV2;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentPaperKit;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentFullscreenDrawing;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentTables;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentOther;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentRichUrl;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentMapLink;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithAttachmentDeepLink;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithTotalCountOfNotesWithAttachmentDocScan:(id)a0 totalCountOfNotesWithAttachmentInlineDrawingV1:(id)a1 totalCountOfNotesWithAttachmentInlineDrawingV2:(id)a2 totalCountOfNotesWithAttachmentPaperKit:(id)a3 totalCountOfNotesWithAttachmentFullscreenDrawing:(id)a4 totalCountOfNotesWithAttachmentTables:(id)a5 totalCountOfNotesWithAttachmentOther:(id)a6 totalCountOfNotesWithAttachmentRichUrl:(id)a7 totalCountOfNotesWithAttachmentMapLink:(id)a8 totalCountOfNotesWithAttachmentDeepLink:(id)a9;

@end
