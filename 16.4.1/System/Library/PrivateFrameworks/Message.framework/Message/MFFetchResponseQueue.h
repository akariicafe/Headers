@class MFIMAPConnection, MFLibraryIMAPStore;

@interface MFFetchResponseQueue : MFBufferedQueue {
    MFLibraryIMAPStore *_store;
    MFIMAPConnection *_connection;
    unsigned long long _numNewUIDs;
    unsigned long long _newMessageCount;
    unsigned long long _highestModSequence;
    unsigned long long _flags;
    BOOL _isSearching;
}

- (BOOL)addItem:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)insertMessages:(id)a0;
- (BOOL)handleItems:(id)a0;
- (id)messageToSyncFlagsForUID:(unsigned int)a0;
- (BOOL)shouldAddUID:(unsigned long long)a0;

@end
