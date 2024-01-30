@class NSString, NSObject;
@protocol OS_os_log;

@interface SUCoreLog : NSObject

@property (readonly, retain, nonatomic) NSObject<OS_os_log> *oslog;
@property (readonly, retain, nonatomic) NSString *category;

+ (id)sharedLogger;

- (id)initWithCategory:(id)a0;
- (void).cxx_destruct;

@end
