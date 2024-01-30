@class NSObject;
@protocol OS_dispatch_group, BUReadChannel;

@interface BUZipFileDescriptorWrapper : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_group> *accessGroup;
@property (readonly, nonatomic) int fileDescriptor;
@property (readonly, nonatomic) id<BUReadChannel> readChannel;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)beginAccess;
- (void)endAccess;
- (id)initWithFileDescriptor:(int)a0 queue:(id)a1;
- (void)waitForAccessToEnd;

@end
