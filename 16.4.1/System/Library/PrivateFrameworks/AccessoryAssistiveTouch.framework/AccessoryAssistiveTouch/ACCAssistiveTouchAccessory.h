@class NSString;

@interface ACCAssistiveTouchAccessory : NSObject

@property (retain, nonatomic) NSString *accessoryUID;
@property (nonatomic) BOOL desiredAssistiveTouchState;

- (void).cxx_destruct;
- (id)initWithAccessoryUID:(id)a0;

@end
