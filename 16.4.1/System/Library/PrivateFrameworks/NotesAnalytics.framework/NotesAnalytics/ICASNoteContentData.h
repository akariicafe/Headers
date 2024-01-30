@class NSString, NSNumber;

@interface ICASNoteContentData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *characterCount;
@property (readonly, nonatomic) NSNumber *hasChecklist;
@property (readonly, nonatomic) NSNumber *hasStyleFormatting;
@property (readonly, nonatomic) NSNumber *hasTable;
@property (readonly, nonatomic) NSNumber *hasAttachmentInlineDrawingV1;
@property (readonly, nonatomic) NSNumber *hasAttachmentInlineDrawingV2;
@property (readonly, nonatomic) NSNumber *hasAttachmentFullscreenDrawing;
@property (readonly, nonatomic) NSNumber *hasAttachmentOther;
@property (readonly, nonatomic) NSNumber *hasAttachedPhoto;
@property (readonly, nonatomic) NSNumber *weeksSinceCreation;
@property (readonly, nonatomic) NSNumber *hasAttachmentRichUrl;
@property (readonly, nonatomic) NSNumber *hasAttachmentMapLink;
@property (readonly, nonatomic) NSNumber *hasTags;
@property (readonly, nonatomic) NSNumber *hasScannedDoc;
@property (readonly, nonatomic) NSNumber *countOfTags;
@property (readonly, nonatomic) NSNumber *countOfDistinctTags;
@property (readonly, nonatomic) NSNumber *hasMentions;
@property (readonly, nonatomic) NSNumber *countOfMentions;
@property (readonly, nonatomic) NSNumber *countOfDistinctMentions;
@property (readonly, nonatomic) NSNumber *hasPaperKitDrawing;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithCharacterCount:(id)a0 hasChecklist:(id)a1 hasStyleFormatting:(id)a2 hasTable:(id)a3 hasAttachmentInlineDrawingV1:(id)a4 hasAttachmentInlineDrawingV2:(id)a5 hasAttachmentFullscreenDrawing:(id)a6 hasAttachmentOther:(id)a7 hasAttachedPhoto:(id)a8 weeksSinceCreation:(id)a9 hasAttachmentRichUrl:(id)a10 hasAttachmentMapLink:(id)a11 hasTags:(id)a12 hasScannedDoc:(id)a13 countOfTags:(id)a14 countOfDistinctTags:(id)a15 hasMentions:(id)a16 countOfMentions:(id)a17 countOfDistinctMentions:(id)a18 hasPaperKitDrawing:(id)a19;

@end
