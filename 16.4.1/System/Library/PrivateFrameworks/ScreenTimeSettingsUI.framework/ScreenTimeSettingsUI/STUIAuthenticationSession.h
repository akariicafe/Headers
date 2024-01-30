@class NSString;

@interface STUIAuthenticationSession : NSObject <STAuthenticationSession>

@property (nonatomic) BOOL hasAlreadyEnteredPINForSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (id)init;
- (void)_passcodeSessionHasEnded:(id)a0;

@end
