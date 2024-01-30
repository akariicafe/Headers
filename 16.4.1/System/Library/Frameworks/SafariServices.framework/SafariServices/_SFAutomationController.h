@interface _SFAutomationController : NSObject

@property (class, readonly, nonatomic, getter=isSystemRemoteAutomationEnabled) BOOL systemRemoteAutomationEnabled;

@property (nonatomic) BOOL allowsRemoteAutomation;

@end
