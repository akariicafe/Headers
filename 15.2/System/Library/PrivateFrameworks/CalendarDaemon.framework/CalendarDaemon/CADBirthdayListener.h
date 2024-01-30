@protocol CalBirthdayListener;

@interface CADBirthdayListener : NSObject

@property (retain, nonatomic) id<CalBirthdayListener> ekBirthdayListener;
@property (retain, nonatomic) Class listenerClass;

+ (void)start;
+ (void)setBirthdayCalendarEnabled:(BOOL)a0;
+ (BOOL)birthdayCalendarEnabled;
+ (void)reset;
+ (id)sharedListener;

- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)setBirthdayCalendarEnabled:(BOOL)a0;
- (BOOL)birthdayCalendarEnabled;
- (void)reset;

@end
