@class DESRecordStore;

@interface TITypingDESRecordWriter : NSObject

@property (retain, nonatomic) DESRecordStore *typingDataStore;

- (id)init;
- (void).cxx_destruct;
- (void)storeTypingSession:(id)a0 containsCP:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)shouldRecordToDES;
- (void)storeAlignedSession:(id)a0 completion:(id /* block */)a1;
- (void)fetchRecords:(id /* block */)a0;
- (void)clearStoredRecordsWithCompletionHandler:(id /* block */)a0;

@end
