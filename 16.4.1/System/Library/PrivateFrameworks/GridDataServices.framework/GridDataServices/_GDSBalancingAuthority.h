@class NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface _GDSBalancingAuthority : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_os_log> *log;

+ (id)sharedInstance;
+ (id)loadRegistrations;
+ (id)fetchBalancingAuthorityPolygons;
+ (id)currentBalancingAuthority;
+ (id)loadBalancingAuthorityStatus;
+ (id)loadNumberForPreferenceKey:(id)a0;
+ (id)loadStringForPreferenceKey:(id)a0;
+ (void)saveBalancingAuthority:(id)a0;
+ (void)saveBalancingAuthorityStatus:(id)a0;
+ (void)saveRegisteration:(id)a0 bundlePath:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)fetchBalancingAuthority;

@end
