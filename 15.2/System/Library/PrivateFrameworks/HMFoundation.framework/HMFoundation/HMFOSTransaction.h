@class NSObject;
@protocol OS_os_transaction;

@interface HMFOSTransaction : HMFObject

@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (readonly, nonatomic) double creationTime;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)init;
- (void)dealloc;

@end
