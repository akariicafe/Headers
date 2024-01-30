@class NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface RTTUIUtilities : NSObject

@property (nonatomic) BOOL headphoneJackSupportsTTY;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callCenterQueue;
@property (nonatomic) BOOL inUnitTestMode;
@property (retain, nonatomic) NSNumber *overrideLTR;

+ (id)relayPhoneNumber;
+ (BOOL)relayIsSupported;
+ (BOOL)hardwareTTYIsSupported;
+ (BOOL)shouldUseRTT;
+ (BOOL)contactIsTTYContact:(id)a0;
+ (BOOL)isOnlyRTTSupported;
+ (BOOL)isRTTSupported;
+ (id)sharedUtilityProvider;
+ (BOOL)softwareTTYIsSupported;
+ (void)cancelCallPromptDisplay;
+ (void)displayCallPromptForContact:(id)a0 withCompletion:(id /* block */)a1;
+ (id)ASCIINumericStringFromString:(struct __CFString { } *)a0;
+ (void)contactIsTTYContact:(id)a0 resultBlock:(id /* block */)a1;
+ (id)phoneNumberStringFromString:(id)a0;
+ (id)rttDisplayName:(long long)a0 forSubscriptionContextUUID:(id)a1;
+ (BOOL)ttyShouldBeRealtimeForCall:(id)a0;

- (id)myPhoneNumber;
- (id)ttyMeContact;
- (unsigned long long)currentPreferredTransportMethod;
- (id)init;
- (BOOL)contactIsTTYContact:(id)a0;
- (void).cxx_destruct;
- (id)conversationForCallUID:(id)a0;
- (BOOL)deleteConversationWithCallUID:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })textInsetForMe:(BOOL)a0;
- (id)bubbleColorForMe:(BOOL)a0;
- (id)bubbleFillForMe:(BOOL)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })bubbleInsetForMe:(BOOL)a0;
- (id)largeTTYIconWithTint:(id)a0;
- (long long)textAlignmentForMe:(BOOL)a0;
- (id)tintedTTYIcon;
- (id)transcriptStringForConversation:(id)a0;
- (id)ttyIconWithTint:(id)a0;

@end
