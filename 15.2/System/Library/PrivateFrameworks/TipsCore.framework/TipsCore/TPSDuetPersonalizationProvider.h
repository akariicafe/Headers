@interface TPSDuetPersonalizationProvider : NSObject

+ (id)personalizedStringsForType:(long long)a0 count:(unsigned long long)a1 error:(id *)a2;
+ (id)_personalizedStringsForType:(long long)a0 count:(unsigned long long)a1 duetDataProvider:(id)a2 error:(id *)a3;
+ (id)contactFromIntentSiriTipStartCall:(id)a0;
+ (id)contactFromIntentForSiriTipSendMessage:(id)a0;
+ (id)nameFromRecipients:(id)a0;
+ (id)personalizedStringsForType:(long long)a0 error:(id *)a1;

@end
