@class NSData, NSNumber;

@interface IDSQuickRelayFixedTokenAllocator : NSObject

@property (copy) NSData *relayIP;
@property (copy) NSData *relayIPv6;
@property (copy) NSNumber *relayPort;
@property (copy) NSData *relaySessionToken;
@property (copy) NSData *relaySessionKey;
@property (copy) NSData *relaySessionID;
@property (copy) NSNumber *relayCombinedSoftwareID;
@property (copy) NSData *appleID;

- (id)initWithDefaults;
- (void).cxx_destruct;
- (BOOL)_isSessionInfoValid:(id)a0;
- (void)_setAllValuesFromDictionary:(id)a0;
- (id)_parseQuickRelayDefaults;
- (id)initWithDictionary:(id)a0;

@end
