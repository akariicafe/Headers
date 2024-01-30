@class NSString, MFMailMessageLibrary;

@interface MFSqliteMessageIDStore : NSObject {
    NSString *_url;
    long long _mailboxRowid;
    MFMailMessageLibrary *_library;
}

- (void).cxx_destruct;
- (void)_loadMailboxRowidIfNecessary:(id)a0;
- (void)deleteAllUIDs;
- (void)deleteUIDsNotInArray:(id)a0;
- (unsigned long long)flagsForUID:(id)a0;
- (id)initWithLibrary:(id)a0 URLString:(id)a1;
- (id)knownMessageIDsFromSet:(id)a0;
- (id)messageIDsAddedBeforeDate:(double)a0;
- (unsigned int)numberOfMessageIDs;

@end
