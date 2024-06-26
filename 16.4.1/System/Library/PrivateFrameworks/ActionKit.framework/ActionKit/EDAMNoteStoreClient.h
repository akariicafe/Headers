@class NSString;
@protocol ENTProtocol;

@interface EDAMNoteStoreClient : NSObject <EDAMNoteStore> {
    id<ENTProtocol> _inProtocol;
    id<ENTProtocol> _outProtocol;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProtocol:(id)a0;
- (void)setUploadProgressBlock:(id /* block */)a0;
- (void)cancel;
- (void).cxx_destruct;
- (void)setDownloadProgressBlock:(id /* block */)a0;
- (id)getNotebookShares:(id)a0 notebookGuid:(id)a1;
- (id)getPreferences:(id)a0 preferenceNames:(id)a1;
- (id)getSearch:(id)a0 guid:(id)a1;
- (id)initWithInProtocol:(id)a0 outProtocol:(id)a1;
- (id)listPublishedBusinessNotebooks:(id)a0;
- (int)shareNoteWithBusiness:(id)a0 noteGuid:(id)a1;
- (id)shareNote:(id)a0 guid:(id)a1;
- (id)acquireNoteLock:(id)a0 noteGuid:(id)a1;
- (id)authenticateToSharedNote:(id)a0 noteKey:(id)a1 authenticationToken:(id)a2;
- (id)authenticateToSharedNotebook:(id)a0 authenticationToken:(id)a1;
- (id)copyNote:(id)a0 noteGuid:(id)a1 toNotebookGuid:(id)a2;
- (id)createLinkedNotebook:(id)a0 linkedNotebook:(id)a1;
- (id)createNote:(id)a0 note:(id)a1;
- (id)createNotebook:(id)a0 notebook:(id)a1;
- (id)createOrUpdateNotebookShares:(id)a0 shareTemplate:(id)a1;
- (id)createOrUpdateSharedNotes:(id)a0 shareTemplate:(id)a1;
- (id)createSearch:(id)a0 search:(id)a1;
- (id)createSharedNotebook:(id)a0 sharedNotebook:(id)a1;
- (id)createTag:(id)a0 tag:(id)a1;
- (int)deleteNote:(id)a0 guid:(id)a1;
- (void)emailNote:(id)a0 parameters:(id)a1;
- (int)expungeInactiveNotes:(id)a0;
- (int)expungeLinkedNotebook:(id)a0 guid:(id)a1;
- (int)expungeNote:(id)a0 guid:(id)a1;
- (int)expungeNotebook:(id)a0 guid:(id)a1;
- (int)expungeNotes:(id)a0 noteGuids:(id)a1;
- (int)expungeSearch:(id)a0 guid:(id)a1;
- (int)expungeSharedNotebooks:(id)a0 sharedNotebookIds:(id)a1;
- (int)expungeTag:(id)a0 guid:(id)a1;
- (id)findContacts:(id)a0 query:(id)a1;
- (id)findInBusiness:(id)a0 query:(id)a1;
- (id)findNoteCounts:(id)a0 filter:(id)a1 withTrash:(BOOL)a2;
- (int)findNoteOffset:(id)a0 filter:(id)a1 guid:(id)a2;
- (id)findNotes:(id)a0 filter:(id)a1 offset:(int)a2 maxNotes:(int)a3;
- (id)findNotesMetadata:(id)a0 filter:(id)a1 offset:(int)a2 maxNotes:(int)a3 resultSpec:(id)a4;
- (id)findRelated:(id)a0 query:(id)a1 resultSpec:(id)a2;
- (id)findSearchSuggestions:(id)a0 query:(id)a1 resultSpec:(id)a2;
- (id)findTimeZones:(id)a0 timeZoneSpec:(id)a1 maxTimeZones:(int)a2;
- (id)getAds:(id)a0 adParameters:(id)a1;
- (id)getDefaultNotebook:(id)a0;
- (id)getFilteredSyncChunk:(id)a0 afterUSN:(int)a1 maxEntries:(int)a2 filter:(id)a3;
- (id)getLinkedAccountSyncState:(id)a0 linkedAccount:(id)a1;
- (id)getLinkedNotebookSyncChunk:(id)a0 linkedNotebook:(id)a1 afterUSN:(int)a2 maxEntries:(int)a3 fullSyncOnly:(BOOL)a4;
- (id)getLinkedNotebookSyncState:(id)a0 linkedNotebook:(id)a1;
- (id)getNote:(id)a0 guid:(id)a1 withContent:(BOOL)a2 withResourcesData:(BOOL)a3 withResourcesRecognition:(BOOL)a4 withResourcesAlternateData:(BOOL)a5;
- (id)getNoteApplicationData:(id)a0 guid:(id)a1;
- (id)getNoteApplicationDataEntry:(id)a0 guid:(id)a1 key:(id)a2;
- (id)getNoteContent:(id)a0 guid:(id)a1;
- (id)getNoteLockStatus:(id)a0 noteGuid:(id)a1;
- (id)getNoteSearchText:(id)a0 guid:(id)a1 noteOnly:(BOOL)a2 tokenizeForIndexing:(BOOL)a3;
- (id)getNoteShares:(id)a0 noteGuid:(id)a1;
- (id)getNoteSnippets:(id)a0 noteGuids:(id)a1 maxSnippetLength:(int)a2;
- (id)getNoteTagNames:(id)a0 guid:(id)a1;
- (id)getNoteVersion:(id)a0 noteGuid:(id)a1 updateSequenceNum:(int)a2 withResourcesData:(BOOL)a3 withResourcesRecognition:(BOOL)a4 withResourcesAlternateData:(BOOL)a5;
- (id)getNoteWithResultSpec:(id)a0 guid:(id)a1 resultSpec:(id)a2;
- (id)getNotebook:(id)a0 guid:(id)a1;
- (id)getNotebookSharesEmailAddresses:(id)a0 notebookGuid:(id)a1 identities:(id)a2 skipUnknownUserIdentities:(BOOL)a3;
- (id)getPublicNotebook:(int)a0 publicUri:(id)a1;
- (id)getRandomAd:(id)a0 adParameters:(id)a1;
- (id)getResource:(id)a0 guid:(id)a1 withData:(BOOL)a2 withRecognition:(BOOL)a3 withAttributes:(BOOL)a4 withAlternateData:(BOOL)a5;
- (id)getResourceAlternateData:(id)a0 guid:(id)a1;
- (id)getResourceApplicationData:(id)a0 guid:(id)a1;
- (id)getResourceApplicationDataEntry:(id)a0 guid:(id)a1 key:(id)a2;
- (id)getResourceAttributes:(id)a0 guid:(id)a1;
- (id)getResourceByHash:(id)a0 noteGuid:(id)a1 contentHash:(id)a2 withData:(BOOL)a3 withRecognition:(BOOL)a4 withAlternateData:(BOOL)a5;
- (id)getResourceData:(id)a0 guid:(id)a1;
- (id)getResourceRecognition:(id)a0 guid:(id)a1;
- (id)getResourceSearchText:(id)a0 guid:(id)a1;
- (id)getSharedNotebookByAuth:(id)a0;
- (id)getSyncChunk:(id)a0 afterUSN:(int)a1 maxEntries:(int)a2 fullSyncOnly:(BOOL)a3;
- (id)getSyncState:(id)a0;
- (id)getSyncStateWithMetrics:(id)a0 clientMetrics:(id)a1;
- (id)getTag:(id)a0 guid:(id)a1;
- (id)getViewersForNotes:(id)a0 noteGuids:(id)a1;
- (id)joinPublishedBusinessNotebook:(id)a0 notebookGuid:(id)a1;
- (id)listAccessibleBusinessNotebooks:(id)a0;
- (id)listLinkedNotebooks:(id)a0;
- (id)listNoteVersions:(id)a0 noteGuid:(id)a1;
- (id)listNotebooks:(id)a0;
- (id)listSearches:(id)a0;
- (id)listSharedNotebooks:(id)a0;
- (id)listTags:(id)a0;
- (id)listTagsByNotebook:(id)a0 notebookGuid:(id)a1;
- (id)manageNoteShares:(id)a0 parameters:(id)a1;
- (id)manageNotebookShares:(id)a0 parameters:(id)a1;
- (id)releaseNoteLock:(id)a0 noteGuid:(id)a1;
- (int)renameNotebook:(id)a0 notebookGuid:(id)a1 name:(id)a2;
- (void)requestAccessToNotebook:(id)a0 notebookGuid:(id)a1 privilegeLevel:(int)a2;
- (id)sendLogRequest:(id)a0 logRequest:(id)a1;
- (int)sendMessageToSharedNotebookMembers:(id)a0 notebookGuid:(id)a1 messageText:(id)a2 recipients:(id)a3;
- (int)setNoteApplicationDataEntry:(id)a0 guid:(id)a1 key:(id)a2 value:(id)a3;
- (id)setNotebookRecipientSettings:(id)a0 notebookGuid:(id)a1 recipientSettings:(id)a2;
- (int)setResourceApplicationDataEntry:(id)a0 guid:(id)a1 key:(id)a2 value:(id)a3;
- (int)setSharedNotebookRecipientSettings:(id)a0 sharedNotebookId:(long long)a1 recipientSettings:(id)a2;
- (id)shareNotebook:(id)a0 sharedNotebook:(id)a1 message:(id)a2;
- (void)stopSharingNote:(id)a0 guid:(id)a1;
- (int)stopSharingNoteWithBusiness:(id)a0 noteGuid:(id)a1;
- (void)stopSharingNoteWithRecipients:(id)a0 guid:(id)a1;
- (void)unpublishNotebook:(id)a0 notebookGuid:(id)a1 convertGroupSharesToIndividual:(BOOL)a2;
- (int)unsetNoteApplicationDataEntry:(id)a0 guid:(id)a1 key:(id)a2;
- (int)unsetResourceApplicationDataEntry:(id)a0 guid:(id)a1 key:(id)a2;
- (void)untagAll:(id)a0 guid:(id)a1;
- (int)updateLinkedNotebook:(id)a0 linkedNotebook:(id)a1;
- (id)updateNote:(id)a0 note:(id)a1;
- (id)updateNoteIfUsnMatches:(id)a0 note:(id)a1;
- (int)updateNotebook:(id)a0 notebook:(id)a1;
- (int)updatePreferences:(id)a0 preferencesToUpdate:(id)a1;
- (int)updateResource:(id)a0 resource:(id)a1;
- (int)updateSearch:(id)a0 search:(id)a1;
- (int)updateSharedNotebook:(id)a0 sharedNotebook:(id)a1;
- (int)updateTag:(id)a0 tag:(id)a1;
- (void)updateUserSetting:(id)a0 setting:(int)a1 value:(id)a2;

@end
