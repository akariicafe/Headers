@interface IMCommSafetySummary : NSObject

+ (void)registerEvent:(unsigned long long)a0 eventType:(unsigned long long)a1 messageGUID:(id)a2 chat:(id)a3 forImages:(id)a4;
+ (id)primaryiCloudAccountIdentifier;
+ (id)recipientStrings:(id)a0;
+ (void)registerEvent:(unsigned long long)a0 eventType:(unsigned long long)a1 messageGUID:(id)a2 chat:(id)a3 forImages:(id)a4 childID:(id)a5 deviceID:(id)a6 senderID:(id)a7 eventSender:(id /* block */)a8;

@end
