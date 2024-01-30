@interface IMDAttachmentSyndicationUtilities : NSObject

+ (id)_syndicationIdentifierForAttachmentRecord:(id)a0 attachmentGUID:(id)a1 messageGUID:(id)a2 attributedBody:(id)a3 verbose:(BOOL)a4;
+ (BOOL)_attachmentRecordIsSyndicatable:(id)a0 attachmentGUID:(id)a1 syndicationIdentifier:(id)a2 attachmentUTI:(id)a3 attributedBody:(id)a4 encodedSyndicationRanges:(id)a5 verbose:(BOOL)a6;
+ (BOOL)attachmentRecordIsSyndicatable:(id)a0 verbose:(BOOL)a1;

@end
