@class NSString;

@interface CRComponentBatteryRoswell : CRComponentBase {
    NSString *identiferBase64;
}

+ (id)sharedSingleton;

- (id)_init;
- (id)init;
- (void).cxx_destruct;
- (id)identiferBase64;
- (void)challengeComponentWith:(id)a0 withReply:(id /* block */)a1;
- (void)setIdentiferBase64:(id)a0;
- (void)signbatteryRoswellWith:(id)a0 withReply:(id /* block */)a1;

@end
