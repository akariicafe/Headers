@class ICBaseTextAttachment, ICAttachment, NSManagedObjectID;

@interface ICDrawingConversionOperation : NSOperation

@property (retain, nonatomic) ICAttachment *attachment;
@property (readonly, nonatomic) BOOL isAutomatic;
@property (readonly, nonatomic) NSManagedObjectID *attachmentID;
@property (readonly, nonatomic) NSManagedObjectID *finalAttachmentID;
@property (retain, nonatomic) ICBaseTextAttachment *textAttachment;

- (void)main;
- (void).cxx_destruct;
- (id)initWithAttachment:(id)a0 textAttachment:(id)a1 automatic:(BOOL)a2;

@end
