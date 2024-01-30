@interface OctopusDecoder : NSObject

+ (int)isBlackListed:(id)a0;
+ (int)filterHistoryEntry:(id)a0;
+ (id)getAAVSAmount:(id)a0;
+ (id)getBaseDate:(id)a0;
+ (int)getEnRouteStatus:(id)a0;
+ (id)getLoyaltyBalance:(id)a0;
+ (id)getNegativeValueLimit:(id)a0;
+ (id)getPhysicalID:(id)a0;
+ (id)getPurseBalance:(id)a0;
+ (id)getTransactionTypeModifierStringFromCode:(unsigned char)a0;
+ (id)getTransactionTypeStringFromCode:(unsigned char)a0 andServiceProviderID:(unsigned char)a1;
+ (id)getTransitTransactionTypeNameFromCode:(unsigned char)a0 andServiceProvider:(unsigned short)a1;
+ (id)injectTLOGAAVS:(id)a0 withAAVSAmount:(id)a1 andBalance:(id)a2;
+ (BOOL)isTopUpTransaction:(unsigned char)a0;
+ (int)isTransitTransactionCode:(unsigned char)a0;
+ (id)parseTLOGBlock:(id)a0 withBaseDate:(id)a1;

@end
