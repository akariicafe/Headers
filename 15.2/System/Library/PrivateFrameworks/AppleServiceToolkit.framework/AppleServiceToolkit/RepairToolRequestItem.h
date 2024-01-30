@class NSString, NSDictionary;

@interface RepairToolRequestItem : NSObject

@property (retain, nonatomic) NSString *destination;
@property (retain, nonatomic) NSString *encryptionKey;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSDictionary *extraHeaders;

- (void).cxx_destruct;
- (id)initWithDestination:(id)a0 andEncryptionKey:(id)a1 andToken:(id)a2 andExtraHeaders:(id)a3;

@end
