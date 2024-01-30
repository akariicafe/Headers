@class SUCoreConnectVersion, NSString, NSSet, NSDictionary, NSError;

@interface SUCoreConnectMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long messageType;
@property (readonly, retain, nonatomic) NSString *messageName;
@property (readonly, retain, nonatomic) NSString *clientID;
@property (readonly, retain, nonatomic) SUCoreConnectVersion *version;
@property (readonly, retain, nonatomic) NSSet *whitelistedClasses;
@property (readonly, retain, nonatomic) NSError *error;
@property (readonly, retain, nonatomic) NSDictionary *message;

+ (BOOL)validateMessageDictionary:(id)a0;
+ (id)nameForMessageType:(long long)a0;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0 messageName:(id)a1 clientID:(id)a2 version:(id)a3 message:(id)a4;

@end
