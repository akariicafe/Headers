@class NSMutableDictionary, BKSHIDEventAuthenticationMessage;

@interface TIKeyboardSecureTouchManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *slots;
@property (retain, nonatomic) BKSHIDEventAuthenticationMessage *lastEventAuthenticationMessage;
@property (nonatomic) unsigned long long lastVerifiedMessageTimestamp;
@property (nonatomic) BOOL bypassCommunication;

+ (id)sharedInstance;

- (void)registerSlotID:(unsigned int)a0;
- (BOOL)verifySlotID:(unsigned int)a0;
- (void).cxx_destruct;
- (id)init;
- (void)touchEventWithAuthenticationMessage:(id)a0;
- (unsigned long long)authenticationMessageContextForSlotID:(unsigned int)a0;
- (void)clearRegistrations;

@end
