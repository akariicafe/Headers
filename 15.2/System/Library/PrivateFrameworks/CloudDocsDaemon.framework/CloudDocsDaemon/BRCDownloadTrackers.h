@class BRCAccountSession, NSMutableDictionary, NSMapTable;

@interface BRCDownloadTrackers : NSObject {
    BRCAccountSession *_session;
    NSMutableDictionary *_trackersByDocID;
    NSMapTable *_docIDsByTracker;
}

- (id)initWithSession:(id)a0;
- (void)document:(id)a0 didCompleteDownloadWithError:(id)a1;
- (void)removeDownloadTracker:(id)a0;
- (void)addDownloadTracker:(id)a0 forItemWithDocID:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)spaceRequiredForTrackers;
- (BOOL)hasPendingTrackerForDocumentID:(id)a0;

@end
