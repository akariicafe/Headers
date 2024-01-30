@class NSMutableDictionary, NSString, NSDictionary, NSData, ACAccount, NSError, NSObject;
@protocol NSSecureCoding;

@interface ACRemoteDeviceMessage : NSObject {
    NSMutableDictionary *_payload;
    NSData *_data;
}

@property (readonly, nonatomic) NSString *command;
@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) NSString *sentMessageIdentifier;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSObject<NSSecureCoding> *result;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL needsReply;
@property (nonatomic) BOOL isReply;

+ (id)_whitelistedClasses;
+ (id)actionMessageWithCommand:(id)a0 account:(id)a1 options:(id)a2;
+ (id)replyForMessage:(id)a0 withSuccess:(BOOL)a1 error:(id)a2;
+ (id)replyForMessage:(id)a0 withSuccess:(BOOL)a1 result:(id)a2 error:(id)a3;

- (void)_invalidateCachedData;
- (id)initWithData:(id)a0;
- (id)_payloadObjectForKey:(id)a0;
- (void)_setPayloadObject:(id)a0 forKey:(id)a1;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
