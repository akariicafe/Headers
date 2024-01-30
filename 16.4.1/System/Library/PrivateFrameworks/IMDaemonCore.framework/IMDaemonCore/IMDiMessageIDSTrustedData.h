@class NSString, NSData;

@interface IMDiMessageIDSTrustedData : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *fromPushID;
@property (readonly, nonatomic) NSData *fromToken;
@property (readonly, nonatomic) NSString *fromIdentifier;
@property (readonly, nonatomic) NSString *toIdentifier;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) long long command;
@property (readonly, nonatomic, getter=isFromTrustedSender) BOOL fromTrustedSender;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTopLevelMessage:(id)a0 fromPushID:(id)a1 messageContext:(id)a2;

@end
