@class NSString, NSData;

@interface IMDiMessageIDSTrustedData : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *fromPushID;
@property (readonly, nonatomic) NSData *fromToken;
@property (readonly, nonatomic) NSString *fromIdentifier;
@property (readonly, nonatomic) NSString *toIdentifier;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) long long command;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTopLevelMessage:(id)a0 fromPushID:(id)a1;

@end
