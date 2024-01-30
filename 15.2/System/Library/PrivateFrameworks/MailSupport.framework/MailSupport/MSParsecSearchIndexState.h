@interface MSParsecSearchIndexState : NSObject

@property (readonly) long long indexType;
@property (readonly) long long percentMessagesIndexed;
@property (readonly) long long percentAttachmentsIndexed;

+ (id)indexStateForMessagesIndexed:(id)a0 indexableMessages:(id)a1 attachmentsIndexed:(id)a2 indexableAttachments:(id)a3;

- (id)description;
- (id)initWithPercentMessagesIndexed:(long long)a0 percentAttachmentsIndexed:(long long)a1 indexType:(long long)a2;

@end
