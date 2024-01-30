@class BRCAccountSession, NSMutableDictionary, NSMapTable;

@interface BRCDownloadTrackers : NSObject {
    BRCAccountSession *_session;
    NSMutableDictionary *_trackersByDocID;
    NSMapTable *_docIDsByTracker;
}

- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (void)addDownloadTracker:(id)a0 forItemWithDocID:(id)a1;
- (void)removeDownloadTracker:(id)a0;
- (void)document:(id)a0 didCompleteDownloadWithError:(id)a1;
- (unsigned long long)spaceRequiredForTrackers;
- (BOOL)hasPendingTrackerForDocumentID:(id)a0;

@end
