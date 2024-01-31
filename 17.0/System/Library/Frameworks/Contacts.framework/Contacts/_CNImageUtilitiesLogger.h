@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNImageUtilitiesLogger : NSObject <CNImageUtilitiesLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end
