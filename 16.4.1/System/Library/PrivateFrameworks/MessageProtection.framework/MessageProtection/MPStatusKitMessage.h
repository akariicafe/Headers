@class NSData;

@interface MPStatusKitMessage : NSObject

@property (readonly, nonatomic) unsigned short index;
@property (readonly, nonatomic) NSData *encryptedMessage;
@property (readonly, nonatomic) NSData *signature;

- (void).cxx_destruct;
- (id)initWithIndex:(unsigned short)a0 encryptedMessage:(id)a1 signature:(id)a2;

@end
