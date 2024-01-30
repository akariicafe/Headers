@interface IDHistoryDecoder : NSObject

+ (id)generateEndEventFromHCI:(id)a0 withTransceiver:(id)a1;
+ (id)getDPAN:(id)a0;
+ (id)getExpirationDate:(id)a0;
+ (unsigned short)getHistoryNumber:(id)a0;
+ (id)getTransactionAmount:(id)a0;
+ (id)getTransactionDate:(id)a0;
+ (unsigned short)getTypeOfUse:(id)a0;
+ (id)parseIDHistoryBlocks:(id)a0;

@end
