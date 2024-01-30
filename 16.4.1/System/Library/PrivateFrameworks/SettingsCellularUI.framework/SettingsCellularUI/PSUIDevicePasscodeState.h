@interface PSUIDevicePasscodeState : NSObject

+ (id)sharedInstance;

- (BOOL)isPasscodeSet;
- (id)getLogger;
- (id)initPrivate;
- (id)init;

@end
