@class CMHealthTrackerInternal;

@interface CMHealthTracker : NSObject

@property (readonly, nonatomic) CMHealthTrackerInternal *_internal;

+ (long long)isAuthorizedForMetMinutes;
+ (BOOL)isVO2MaxDataAvailable;
+ (long long)isAuthorizedForVO2MaxData;
+ (BOOL)isMetMinutesAvailable;

- (id)init;
- (void)dealloc;
- (void)queryMetMinutesFromDate:(id)a0 toDate:(id)a1 handler:(id /* block */)a2;
- (void)queryVO2MaxInputsFromRecord:(id)a0 handler:(id /* block */)a1;

@end
