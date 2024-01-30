@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SecTapToRadar : NSObject

@property (retain) NSString *alert;
@property (retain) NSString *radarDescription;
@property (retain) NSString *radarnumber;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *componentID;
@property (retain, nonatomic) NSString *componentName;
@property (retain, nonatomic) NSString *componentVersion;

+ (void)triggerTapToRadar:(id)a0;
+ (BOOL)askUserIfTTR:(id)a0;
+ (void)disableTTRsEntirely;
+ (BOOL)isRateLimited:(id)a0;
+ (id)keyname:(id)a0;

- (void)trigger;
- (void).cxx_destruct;
- (void)clearRetryTimestamp;
- (id)initTapToRadar:(id)a0 description:(id)a1 radar:(id)a2;
- (BOOL)isRateLimited;
- (void)updateRetryTimestamp;

@end
