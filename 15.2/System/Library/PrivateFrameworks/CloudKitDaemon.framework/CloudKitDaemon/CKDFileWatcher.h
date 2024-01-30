@class NSString, NSObject;
@protocol OS_dispatch_source;

@interface CKDFileWatcher : NSObject

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *source;
@property (nonatomic) int fd;

+ (id)queue;

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
