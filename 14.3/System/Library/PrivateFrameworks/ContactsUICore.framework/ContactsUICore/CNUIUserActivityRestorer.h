@class CNContactStore, NSObject;
@protocol OS_os_log, CNUIUserActivityRestorerDelegate;

@interface CNUIUserActivityRestorer : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (weak, nonatomic) id<CNUIUserActivityRestorerDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0;
- (BOOL)shouldEnableActivityIndicatorWhenRestoringUserActivityWithType:(id)a0;
- (BOOL)restoreUserActivity:(id)a0;

@end
