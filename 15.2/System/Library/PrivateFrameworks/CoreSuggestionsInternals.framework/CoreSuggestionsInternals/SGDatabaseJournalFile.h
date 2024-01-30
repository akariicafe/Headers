@class NSString;

@interface SGDatabaseJournalFile : NSObject {
    NSString *_path;
    unsigned long long _len;
    int _fd;
    BOOL _written;
    BOOL _dead;
}

- (void)clear;
- (id)initWithPath:(id)a0;
- (void)unlink;
- (id)description;
- (id)read;
- (void).cxx_destruct;
- (void)write:(id)a0;
- (id)init;
- (void)dealloc;
- (void)destroy;
- (void)destroyAndUnlinkIfEmpty;

@end
