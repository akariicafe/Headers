@class NSError;

@interface HDSPSleepScheduleModelSaveResult : NSObject

@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL shouldNotify;

+ (id)emptyResult;
+ (id)saveFailedWithError:(id)a0;

- (void).cxx_destruct;
- (id)initWithSuccess:(BOOL)a0 error:(id)a1 shouldNotify:(BOOL)a2;

@end
