@class NSString, WebBookmarkCollection;

@interface WLBookmarksMigrator : NSObject <WLDataclassMigrating> {
    WebBookmarkCollection *_collection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentType;
+ (id)_createBookmarkFolderWithTitle:(id)a0 UUID:(id)a1;
+ (id)_bookmarkFolderAtTitlePath:(id)a0 withinBookmarkFolder:(id)a1;
+ (id)_createRootBookmarkFolder;
+ (id)_bookmarkFolderAtTitlePath:(id)a0 withinRootFolder:(id)a1;

- (void).cxx_destruct;
- (id)contentType;
- (id)dataType;
- (BOOL)accountBased;
- (void)importDataFromProvider:(id /* block */)a0 forSummaries:(id)a1 summaryStart:(id /* block */)a2 summaryCompletion:(id /* block */)a3;
- (BOOL)storeRecordDataInDatabase;
- (BOOL)wantsSegmentedDownloads;
- (void)estimateItemSizeForSummary:(id)a0 account:(id)a1;
- (id)importWillBegin;
- (id)importDidEnd;

@end
