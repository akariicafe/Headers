@interface IMDSpamMessageCreator : NSObject

- (id)transferForGuid:(id)a0;
- (id)surfURLForIMMessageItem:(id)a0;
- (id)metaDataForSurfURL:(id)a0;
- (BOOL)isSurfPayment:(id)a0;
- (BOOL)hasDataDetectedInformalPayment:(id)a0;
- (void)reportUnknownToIDS:(id)a0 messageID:(id)a1 isBlackholed:(BOOL)a2 messageServerTimestamp:(id)a3 toURI:(id)a4;
- (id)reportMessageDictionaryForMessages:(id)a0 withLastAddressedHandle:(id)a1 maxMessageLength:(unsigned long long)a2 isAutoReport:(BOOL)a3 withChat:(id)a4 maxMessagesToReport:(unsigned long long)a5 totalMessageCount:(unsigned long long *)a6 onlyReportForiMessageService:(BOOL)a7 notifyInternalSecurity:(BOOL)a8;

@end
