@protocol CalBirthdayListener;

@interface CADBirthdayListener : NSObject

@property (retain, nonatomic) id<CalBirthdayListener> ekBirthdayListener;
@property (retain, nonatomic) Class listenerClass;

+ (id)sharedListener;
+ (void)setBirthdayCalendarEnabled:(BOOL)a0;
+ (void)start;
+ (BOOL)birthdayCalendarEnabled;
+ (void)reset;

- (void)setBirthdayCalendarEnabled:(BOOL)a0;
- (id)init;
- (void)start;
- (BOOL)birthdayCalendarEnabled;
- (void).cxx_destruct;
- (void)reset;

@end
