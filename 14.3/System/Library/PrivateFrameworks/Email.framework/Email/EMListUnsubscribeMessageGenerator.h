@interface EMListUnsubscribeMessageGenerator : NSObject

+ (id)dateString;
+ (id)messageHeadersWithCommand:(id)a0 headersFactory:(id)a1;
+ (id)localizedBodyForCommand:(id)a0;
+ (id)senderForCommand:(id)a0;

@end
