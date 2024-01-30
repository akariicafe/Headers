@class NSObject;
@protocol OS_os_transaction;

@interface HMFOSTransaction : HMFObject

@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (readonly, nonatomic) double creationTime;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithName:(id)a0;

@end
