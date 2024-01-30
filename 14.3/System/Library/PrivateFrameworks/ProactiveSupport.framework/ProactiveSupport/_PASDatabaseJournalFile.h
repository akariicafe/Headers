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
