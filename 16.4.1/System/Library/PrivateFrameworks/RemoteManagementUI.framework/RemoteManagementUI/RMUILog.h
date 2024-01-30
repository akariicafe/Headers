@class NSObject;
@protocol OS_os_log;

@interface RMUILog : NSObject

@property (class, readonly) NSObject<OS_os_log> *accountViewModelProvider;
@property (class, readonly) NSObject<OS_os_log> *configurationInterface;
@property (class, readonly) NSObject<OS_os_log> *profilesViewModelProvider;
@property (class, readonly) NSObject<OS_os_log> *passcodeViewModelProvider;

@end
