@interface IMCarrierReportJunkHelper : NSObject

+ (BOOL)isReportJunkServiceAllowedForMessageItem:(id)a0 junkChatStyle:(unsigned char)a1;
+ (BOOL)canReportJunkOverCellularServiceOfMessageItem:(id)a0;
+ (id)cellularServiceStatusOfCallerID:(id)a0;
+ (void)collectReportJunkMetricsForJunkMessageItem:(id)a0 junkChatStyle:(unsigned char)a1 totalMessagesInThread:(unsigned long long)a2;
+ (id)createJunkReportMessageBodyTextForMessageItem:(id)a0 junkChatStyle:(unsigned char)a1;
+ (id)createJunkReportMessageItemBodyForMessageItem:(id)a0 junkChatStyle:(unsigned char)a1;
+ (id)dateReceivedAsStringForMessageItem:(id)a0;
+ (id)fetchMMSReportJunkCarrierAddressForPhoneNumber:(id)a0 simID:(id)a1;
+ (id)fetchSMSReportJunkCarrierAddressForPhoneNumber:(id)a0 simID:(id)a1;
+ (id)jsonSerializeDictionary:(id)a0;
+ (id)junkReportMessageItemForMessageItem:(id)a0 account:(id)a1 junkChatStyle:(unsigned char)a2;
+ (id)reportJunkCarrierAddressForMessageItem:(id)a0 junkChatStyle:(unsigned char)a1;
+ (void)setHandleParametersOfMessageItem:(id)a0 usingAccount:(id)a1 usingMessageItem:(id)a2 junkChatStyle:(unsigned char)a3;
+ (void)simIDPhoneNumberFromMessageDestinationCallerID:(id)a0 simID:(id *)a1 phoneNumber:(id *)a2;
+ (BOOL)validateReportJunkCarrierAddress:(id)a0;

@end
