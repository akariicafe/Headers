@interface MessageAttachmentActionGenerator : NSObject

+ (id)_saveToCameraRollActionForFutureRepresentations:(id)a0 title:(id)a1 image:(id)a2;
+ (id)saveImageActionForFutureRepresentation:(id)a0;
+ (id)saveVideoActionForFutureRepresentation:(id)a0;
+ (id)saveAllAttachmentsActionWithTitle:(id)a0 futureRepresentations:(id)a1;
+ (id)quicklookActionForURL:(id)a0 contentRepresentationHandlingDelegate:(id)a1;
+ (id)markupDocumentActionForURL:(id)a0 contentRepresentationHandlingDelegate:(id)a1;

@end
