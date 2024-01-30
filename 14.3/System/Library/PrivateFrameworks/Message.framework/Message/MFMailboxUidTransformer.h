@interface MFMailboxUidTransformer : NSObject

+ (BOOL)isMailbox:(id)a0 equalTo:(id)a1 uidToMailboxMap:(id)a2;

- (id)init;
- (id)transformMailboxUid:(id)a0 uidToMailboxMap:(id)a1 objectIDToUidMap:(id)a2;

@end
