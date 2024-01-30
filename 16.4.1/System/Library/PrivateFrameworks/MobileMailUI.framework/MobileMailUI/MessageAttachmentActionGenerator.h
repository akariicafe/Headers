@interface MessageAttachmentActionGenerator : NSObject

+ (id)_saveToCameraRollActionForFutureRepresentations:(id)a0 title:(id)a1 image:(id)a2;
+ (id)markupDocumentActionForURL:(id)a0 messageObjectID:(id)a1 mailboxObjectID:(id)a2 subject:(id)a3 contentRepresentationHandlingDelegate:(id)a4;
+ (id)quicklookActionForAttachmentContext:(id)a0 alternateAction:(id)a1;
+ (id)quicklookActionForURL:(id)a0 messageObjectID:(id)a1 mailboxObjectID:(id)a2 subject:(id)a3 contentRepresentationHandlingDelegate:(id)a4;
+ (id)saveAllAttachmentsActionWithTitle:(id)a0 futureRepresentations:(id)a1;
+ (id)saveImageActionForFutureRepresentation:(id)a0;
+ (id)saveVideoActionForFutureRepresentation:(id)a0;

@end
