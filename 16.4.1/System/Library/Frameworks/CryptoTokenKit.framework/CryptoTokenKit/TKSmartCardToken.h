@class NSData, TKSmartCard;

@interface TKSmartCardToken : TKToken

@property (readonly, nonatomic) TKSmartCard *smartCard;
@property (retain, nonatomic) id keepAlive;
@property (readonly) NSData *AID;

- (void).cxx_destruct;
- (id)initWithSmartCard:(id)a0 AID:(id)a1 instanceID:(id)a2 tokenDriver:(id)a3;

@end
