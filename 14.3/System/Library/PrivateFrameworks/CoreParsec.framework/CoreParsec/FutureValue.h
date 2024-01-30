@class NSObject;
@protocol OS_dispatch_group;

@interface FutureValue : NSObject

@property (retain) id value;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *group;

- (id)init;
- (void).cxx_destruct;

@end
