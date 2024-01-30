@class NSString, ICASNoteType, ICASCollaborationStatus, ICASCollaborationType, NSNumber;

@interface ICASNoteSnapshotItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *noteID;
@property (readonly, nonatomic) ICASNoteType *noteType;
@property (readonly, nonatomic) ICASCollaborationStatus *collaborationStatus;
@property (readonly, nonatomic) ICASCollaborationType *collaborationType;
@property (readonly, nonatomic) NSNumber *countOfInvitees;
@property (readonly, nonatomic) NSNumber *countOfAcceptances;
@property (readonly, nonatomic) NSNumber *countOfDocScan;
@property (readonly, nonatomic) NSNumber *countOfInlineDrawingV1;
@property (readonly, nonatomic) NSNumber *countOfInlineDrawingV2;
@property (readonly, nonatomic) NSNumber *countOfFullscreenDrawing;
@property (readonly, nonatomic) NSNumber *countOfTables;
@property (readonly, nonatomic) NSNumber *countOfAttachmentOther;
@property (readonly, nonatomic) NSNumber *hasChecklist;
@property (readonly, nonatomic) NSNumber *isPinned;
@property (readonly, nonatomic) NSNumber *isLocked;
@property (readonly, nonatomic) NSNumber *charLength;
@property (readonly, nonatomic) NSNumber *creationDate;
@property (readonly, nonatomic) NSNumber *countOfInlineDrawingV1PencilStrokes;
@property (readonly, nonatomic) NSNumber *countOfInlineDrawingV1FingerStrokes;
@property (readonly, nonatomic) NSNumber *countOfInlineDrawingV2PencilStrokes;
@property (readonly, nonatomic) NSNumber *countOfInlineDrawingV2FingerStrokes;
@property (readonly, nonatomic) NSNumber *countOfFullscreenDrawingStrokes;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithNoteID:(id)a0 noteType:(id)a1 collaborationStatus:(id)a2 collaborationType:(id)a3 countOfInvitees:(id)a4 countOfAcceptances:(id)a5 countOfDocScan:(id)a6 countOfInlineDrawingV1:(id)a7 countOfInlineDrawingV2:(id)a8 countOfFullscreenDrawing:(id)a9 countOfTables:(id)a10 countOfAttachmentOther:(id)a11 hasChecklist:(id)a12 isPinned:(id)a13 isLocked:(id)a14 charLength:(id)a15 creationDate:(id)a16 countOfInlineDrawingV1PencilStrokes:(id)a17 countOfInlineDrawingV1FingerStrokes:(id)a18 countOfInlineDrawingV2PencilStrokes:(id)a19 countOfInlineDrawingV2FingerStrokes:(id)a20 countOfFullscreenDrawingStrokes:(id)a21;

@end
