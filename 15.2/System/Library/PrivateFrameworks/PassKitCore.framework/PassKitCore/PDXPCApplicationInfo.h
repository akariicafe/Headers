@class NSString;

@interface PDXPCApplicationInfo : NSObject

@property (readonly, nonatomic) NSString *displayID;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;
@property (readonly, nonatomic, getter=isRunning) BOOL running;

- (void).cxx_destruct;
- (id)initWithPID:(int)a0;
- (id)init;

@end
