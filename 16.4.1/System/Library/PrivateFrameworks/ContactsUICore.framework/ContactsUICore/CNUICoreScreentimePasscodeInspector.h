@class NSString;

@interface CNUICoreScreentimePasscodeInspector : NSObject <CNUICoreScreentimePasscodeCheck>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)screentimePasscodeStatus;
- (unsigned long long)screentimePasscodeStatusOfDelegateWithInfo:(id)a0;

@end
