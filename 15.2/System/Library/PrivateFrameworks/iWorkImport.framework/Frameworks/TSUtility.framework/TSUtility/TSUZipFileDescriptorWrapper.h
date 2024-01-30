@class NSObject;
@protocol OS_dispatch_group, TSUReadChannel;

@interface TSUZipFileDescriptorWrapper : NSObject {
    NSObject<OS_dispatch_group> *_accessGroup;
}

@property (readonly, nonatomic) int fileDescriptor;
@property (readonly, nonatomic) id<TSUReadChannel> readChannel;

- (id)initWithFileDescriptor:(int)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)beginAccess;
- (void)endAccess;
- (void)waitForAccessToEnd;

@end
