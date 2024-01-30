@class NSObject;
@protocol OS_dispatch_group, TSUReadChannel;

@interface TSUZipFileDescriptorWrapper : NSObject {
    NSObject<OS_dispatch_group> *_accessGroup;
}

@property (readonly, nonatomic) int fileDescriptor;
@property (readonly, nonatomic) id<TSUReadChannel> readChannel;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)beginAccess;
- (void)endAccess;
- (id)initWithFileDescriptor:(int)a0 queue:(id)a1;
- (void)waitForAccessToEnd;

@end
