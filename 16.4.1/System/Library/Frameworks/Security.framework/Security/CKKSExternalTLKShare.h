@class NSString, NSData;

@interface CKKSExternalTLKShare : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *view;
@property (readonly) NSString *tlkUUID;
@property (readonly) NSData *receiverPeerID;
@property (readonly) NSData *senderPeerID;
@property (readonly) NSData *wrappedTLK;
@property (readonly) NSData *signature;

+ (id)parseFromJSONDict:(id)a0 error:(id *)a1;
+ (id)unstringifyPeerID:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)jsonDictionary;
- (id)description;
- (void).cxx_destruct;
- (id)initWithView:(id)a0 tlkUUID:(id)a1 receiverPeerID:(id)a2 senderPeerID:(id)a3 wrappedTLK:(id)a4 signature:(id)a5;
- (id)stringifyPeerID:(id)a0;

@end
