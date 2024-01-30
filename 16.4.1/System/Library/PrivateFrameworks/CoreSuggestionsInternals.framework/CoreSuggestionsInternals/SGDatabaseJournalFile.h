@class NSString;

@interface SGDatabaseJournalFile : NSObject {
    NSString *_path;
    unsigned long long _len;
    int _fd;
    BOOL _written;
    BOOL _dead;
}

- (void)write:(id)a0;
- (id)initWithPath:(id)a0;
- (id)read;
- (void)destroy;
- (void)dealloc;
- (id)init;
- (id)description;
- (void)clear;
- (void).cxx_destruct;
- (void)destroyAndUnlinkIfEmpty;
- (void)unlink;

@end
