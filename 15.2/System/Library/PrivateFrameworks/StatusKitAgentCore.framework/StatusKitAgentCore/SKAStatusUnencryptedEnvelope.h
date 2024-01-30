@class NSDictionary, NSString, NSDate;

@interface SKAStatusUnencryptedEnvelope : NSObject

@property (retain, nonatomic) NSDictionary *envelopeDictionary;
@property (readonly, nonatomic) NSString *statusUniqueIdentifier;
@property (readonly, nonatomic) NSDate *datePublished;
@property (readonly, nonatomic) NSDate *dateCreated;

- (id)initWithEnvelopeDictionary:(id)a0;
- (void).cxx_destruct;

@end
