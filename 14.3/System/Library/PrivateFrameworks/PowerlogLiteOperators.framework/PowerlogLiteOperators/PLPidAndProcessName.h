@class NSNumber, NSString;

@interface PLPidAndProcessName : NSObject

@property (retain) NSNumber *pid;
@property (retain) NSString *processName;

- (void).cxx_destruct;
- (id)description;

@end
