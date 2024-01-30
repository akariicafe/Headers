@class NSString;
@protocol BFFPasscodeCreationDelegate;

@interface BFFPasscodeCreationManager : NSObject

@property (copy, nonatomic) NSString *passcode;
@property (nonatomic) BOOL acceptedWeakPasscode;
@property (copy, nonatomic) NSString *constraintFailedInstructions;
@property (nonatomic) unsigned long long passcodeState;
@property (weak, nonatomic) id<BFFPasscodeCreationDelegate> delegate;
@property (readonly, nonatomic) NSString *constraintInstructions;
@property (nonatomic, getter=isNumericPasscodeEntry) BOOL numericPasscodeEntry;
@property (nonatomic) long long simplePasscodeEntryLength;

+ (id)sharedPasscodeManager;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)_applyPasscode;
- (id)_mainQueue;
- (void)acceptWeakPasscode:(BOOL)a0;
- (BOOL)isSimplePasscodeEntry;
- (void)transitionToNextPasscodeStateForInput:(id)a0;

@end
