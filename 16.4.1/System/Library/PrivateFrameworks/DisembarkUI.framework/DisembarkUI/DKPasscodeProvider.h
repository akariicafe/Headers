@class NSString;

@interface DKPasscodeProvider : NSObject <DKPasscodeProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDevicePasscodeSet;
- (int)simplePasscodeType;
- (int)unlockType;
- (BOOL)verifyPasscode:(id)a0;
- (BOOL)isScreenTimePasscodeSet;
- (BOOL)verifyScreenTimePasscode:(id)a0;

@end
