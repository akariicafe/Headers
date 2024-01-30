@class NSDictionary, NSObject;
@protocol OS_os_log;

@interface OS_MobileGestalt : NSObject

@property (retain, nonatomic) NSDictionary *overrides;
@property (nonatomic) NSObject<OS_os_log> *log;

- (id)init;
- (void).cxx_destruct;

@end
