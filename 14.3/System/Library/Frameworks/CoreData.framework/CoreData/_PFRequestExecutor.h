@class NSObject;
@protocol OS_dispatch_group;

@interface _PFRequestExecutor : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_group> *requestGroup;

- (id)init;
- (void)dealloc;

@end
