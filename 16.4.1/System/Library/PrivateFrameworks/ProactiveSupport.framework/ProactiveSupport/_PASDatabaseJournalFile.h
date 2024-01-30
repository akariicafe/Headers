@class NSString;

@interface _PASDatabaseJournalFile : NSObject {
    NSString *_path;
    unsigned long long _len;
    unsigned long long _readCursor;
    int _fd;
    BOOL _written;
    BOOL _dead;
}

@property (readonly, nonatomic) BOOL isFullyRead;
@property (readonly, nonatomic) BOOL isAlive;
@property (readonly, nonatomic) unsigned long long length;

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
