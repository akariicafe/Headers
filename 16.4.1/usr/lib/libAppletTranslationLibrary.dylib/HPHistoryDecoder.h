@interface HPHistoryDecoder : NSObject

+ (id)_decodeShinkansenTrainDataWithBlock:(id)a0 andBlock:(id)a1;
+ (struct { unsigned char x0; unsigned int x1; })getCommuterBalance:(id)a0;
+ (BOOL)getGreenCarTicketUsed:(id)a0;
+ (unsigned short)getHistoryNumber:(id)a0;
+ (struct { unsigned char x0; unsigned char x1; })getInOutStation:(id)a0;
+ (BOOL)getIsBlackListed:(id)a0;
+ (struct { struct { unsigned short x0; unsigned char x1; } x0; struct { unsigned short x0; unsigned char x1; } x1; })getSectorInformation:(id)a0;
+ (int)getTransactionAmount:(id)a0 withPreviousBlock:(id)a1;
+ (struct { unsigned char x0; unsigned int x1; })getTransactionBalance:(id)a0;
+ (id)getTransactionDate:(id)a0;
+ (unsigned short)getTypeOfUse:(id)a0;
+ (id)parseGreencarBlocks:(id)a0;
+ (id)parseShinkansenBlocks:(id)a0 fromServiceCode:(unsigned short)a1;
+ (id)parseSuicaHistoryBlocks:(id)a0 withIDm:(id)a1;

@end
