@class Logger;

@interface PSUIDevicePasscodeState : NSObject {
    Logger *_logger;
}

+ (id)sharedInstance;

- (BOOL)isPasscodeSet;
- (id)getLogger;
- (id)initPrivate;
- (void).cxx_destruct;
- (id)init;

@end
