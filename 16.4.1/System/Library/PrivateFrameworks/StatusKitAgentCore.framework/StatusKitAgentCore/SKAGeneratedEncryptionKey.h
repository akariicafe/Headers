@class MPStatusKitOutgoingRatchet, MPStatusKitIncomingRatchet, NSData, NSDate;

@interface SKAGeneratedEncryptionKey : NSObject

@property (readonly, nonatomic) MPStatusKitOutgoingRatchet *outgoingRatchet;
@property (readonly, nonatomic) MPStatusKitIncomingRatchet *incomingRatchet;
@property (readonly, nonatomic) NSData *originalOutgoingRatchetState;
@property (readonly, nonatomic) NSDate *dateGenerated;

+ (id)logger;

- (void).cxx_destruct;
- (id)initWithCoreDataGeneratedEncryptionKey:(id)a0;
- (id)initWithOriginalOutgoingRatchetState:(id)a0 dateGenerated:(id)a1;

@end
