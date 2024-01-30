@class NSURL, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_workloop;

@interface PDSConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_workloop> *workloop;
@property (retain, nonatomic) NSURL *daemonRootDirectory;
@property (retain, nonatomic) NSString *pushHandlerPort;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
