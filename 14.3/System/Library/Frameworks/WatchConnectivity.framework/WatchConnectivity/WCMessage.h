@class NSString, NSData;

@interface WCMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *pairingID;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSData *data;
@property (readonly, getter=isDictionaryMessage) BOOL dictionaryMessage;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPairingID:(id)a0 identifier:(id)a1 data:(id)a2 dictionaryMessage:(BOOL)a3;

@end
