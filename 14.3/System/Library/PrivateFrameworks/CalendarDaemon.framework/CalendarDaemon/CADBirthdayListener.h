@protocol CalBirthdayListener;

@interface CADBirthdayListener : NSObject

@property (retain, nonatomic) id<CalBirthdayListener> ekBirthdayListener;
@property (retain, nonatomic) Class listenerClass;

+ (BOOL)birthdayCalendarEnabled;
+ (id)sharedListener;
+ (void)start;
+ (void)setBirthdayCalendarEnabled:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)birthdayCalendarEnabled;
- (void)setBirthdayCalendarEnabled:(BOOL)a0;

@end
