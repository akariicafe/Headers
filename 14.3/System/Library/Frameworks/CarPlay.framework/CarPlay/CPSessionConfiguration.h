@class CARSessionStatus;
@protocol CPSessionConfigurationDelegate;

@interface CPSessionConfiguration : NSObject

@property (nonatomic) unsigned long long limitedUserInterfaces;
@property (retain, nonatomic) CARSessionStatus *currentStatus;
@property (nonatomic) unsigned long long contentStyle;
@property (weak, nonatomic) id<CPSessionConfigurationDelegate> delegate;

+ (unsigned long long)convertLimitableUserInterfaces:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_limitedUIDidChange:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)_updateLimitedUIStatus;
- (void)_updateNightMode;
- (void)_nightModeDidChange:(id)a0;

@end
