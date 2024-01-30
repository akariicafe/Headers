@class NSString, NSDictionary, NSData, NSError;

@interface ATLegacyMessage : NSObject

@property (nonatomic) unsigned long long messageType;
@property (nonatomic) unsigned int messageId;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *dataClass;
@property (retain, nonatomic) NSError *result;
@property (retain, nonatomic) NSDictionary *parameters;
@property (retain, nonatomic) NSData *payload;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSData *sig;
@property (nonatomic) unsigned int sessionNumber;

+ (id)messageFromData:(id)a0;
+ (void)setSessionNumber:(unsigned int)a0;
+ (id)_messageTypeString:(unsigned long long)a0;
+ (unsigned int)nextSessionNumber;
+ (unsigned int)currentSessionNumber;
+ (id)messageWithName:(id)a0 parameters:(id)a1;
+ (id)messageWithName:(id)a0 parameters:(id)a1 session:(unsigned int)a2;
+ (id)messageFromHeader:(id)a0 withParams:(id)a1 andPayload:(id)a2;
+ (id)messageFromDictionary:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionary;
- (id)parameterForKey:(id)a0;
- (id)data;
- (id)partialResponseWithParameters:(id)a0;
- (id)responseWithResultError:(id)a0 parameters:(id)a1;

@end
