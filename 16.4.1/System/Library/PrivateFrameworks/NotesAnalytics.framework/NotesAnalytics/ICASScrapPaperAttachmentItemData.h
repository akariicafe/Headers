@class NSString, NSNumber;

@interface ICASScrapPaperAttachmentItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *totalCountOfScrapPapersWithAttachmentDocScan;
@property (readonly, nonatomic) NSNumber *totalCountOfScrapPapersWithAttachmentInlineDrawingV1;
@property (readonly, nonatomic) NSNumber *totalCountOfScrapPapersWithAttachmentInlineDrawingV2;
@property (readonly, nonatomic) NSNumber *totalCountOfScrapPapersWithAttachmentPaperKit;
@property (readonly, nonatomic) NSNumber *totalCountOfScrapPapersWithAttachmentFullscreenDrawing;
@property (readonly, nonatomic) NSNumber *totalCountOfScrapPapersWithAttachmentTables;
@property (readonly, nonatomic) NSNumber *totalCountOfScrapPapersWithAttachmentOther;
@property (readonly, nonatomic) NSNumber *totalCountOfScrapPapersWithAttachmentRichUrl;
@property (readonly, nonatomic) NSNumber *totalCountOfScrapPapersWithAttachmentMapLink;
@property (readonly, nonatomic) NSNumber *totalCountOfScrapPapersWithAttachmentDeepLink;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithTotalCountOfScrapPapersWithAttachmentDocScan:(id)a0 totalCountOfScrapPapersWithAttachmentInlineDrawingV1:(id)a1 totalCountOfScrapPapersWithAttachmentInlineDrawingV2:(id)a2 totalCountOfScrapPapersWithAttachmentPaperKit:(id)a3 totalCountOfScrapPapersWithAttachmentFullscreenDrawing:(id)a4 totalCountOfScrapPapersWithAttachmentTables:(id)a5 totalCountOfScrapPapersWithAttachmentOther:(id)a6 totalCountOfScrapPapersWithAttachmentRichUrl:(id)a7 totalCountOfScrapPapersWithAttachmentMapLink:(id)a8 totalCountOfScrapPapersWithAttachmentDeepLink:(id)a9;

@end
