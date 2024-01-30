@class NSArray, NSMutableDictionary, BKSHIDEventAuthenticationMessage;

@interface TIKeyboardSecureTouchManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *slots;
@property (retain, nonatomic) BKSHIDEventAuthenticationMessage *lastEventAuthenticationMessage;
@property (retain, nonatomic) NSArray *keys;
@property (nonatomic) unsigned long long lastVerifiedMessageTimestamp;
@property (nonatomic) BOOL bypassCommunication;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)clearRegistrations;
- (void)touchEventWithAuthenticationMessage:(id)a0;
- (void)registerSlotID:(unsigned int)a0;
- (BOOL)verifySlotID:(unsigned int)a0;
- (unsigned long long)authenticationMessageContextForSlotID:(unsigned int)a0;

@end
