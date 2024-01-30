@class NSString;

@interface SGDatabaseJournalFile : NSObject {
    NSString *_path;
    unsigned long long _len;
    int _fd;
    BOOL _written;
    BOOL _dead;
}

- (id)initWithPath:(id)a0;
- (void)clear;
- (id)init;
- (void).cxx_destruct;
- (id)read;
- (void)write:(id)a0;
- (void)dealloc;
- (void)unlink;
- (id)description;
- (void)destroy;
- (void)destroyAndUnlinkIfEmpty;

@end
