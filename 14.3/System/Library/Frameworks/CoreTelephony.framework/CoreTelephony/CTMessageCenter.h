@interface CTMessageCenter : NSObject

+ (id)sharedMessageCenter;

- (struct { int x0; int x1; })sendSMS:(id)a0 withMoreToFollow:(BOOL)a1 trackingID:(unsigned int *)a2;
- (struct { int x0; int x1; })send:(id)a0 withMoreToFollow:(BOOL)a1;
- (BOOL)getCharacterCountForSub:(id)a0 count:(long long *)a1 andMessageSplitThreshold:(long long *)a2 forSmsText:(id)a3;
- (id)incomingMessageWithId:(unsigned int)a0 isDeferred:(BOOL)a1;
- (id)init;
- (BOOL)sendSMSWithText:(id)a0 serviceCenter:(id)a1 toAddress:(id)a2 withID:(unsigned int)a3;
- (BOOL)sendSMSWithText:(id)a0 text:(id)a1 serviceCenter:(id)a2 toAddress:(id)a3 withMoreToFollow:(BOOL)a4 withID:(unsigned int)a5;
- (BOOL)isMmsEnabled;
- (BOOL)sendSMSWithText:(id)a0 serviceCenter:(id)a1 toAddress:(id)a2 withMoreToFollow:(BOOL)a3 withID:(unsigned int)a4;
- (void)acknowledgeIncomingMessageWithId:(unsigned int)a0;
- (void)dealloc;
- (id)allIncomingMessages;
- (void)acknowledgeOutgoingMessageWithId:(unsigned int)a0;
- (BOOL)sendBinarySMS:(id)a0 trackingID:(unsigned int *)a1;
- (BOOL)sendSMSWithText:(id)a0 text:(id)a1 serviceCenter:(id)a2 toAddress:(id)a3;
- (void)emergencySessionIntentStart:(id)a0;
- (BOOL)sendSMSWithText:(id)a0 serviceCenter:(id)a1 toAddress:(id)a2;
- (BOOL)isMmsConfigured;
- (BOOL)simulateDeferredMessage;
- (int)incomingMessageCount;
- (BOOL)sendSMSWithText:(id)a0 text:(id)a1 serviceCenter:(id)a2 toAddress:(id)a3 trackingID:(unsigned int *)a4;
- (id)encodeMessage:(id)a0;
- (BOOL)sendSMSWithText:(id)a0 serviceCenter:(id)a1 toAddress:(id)a2 trackingID:(unsigned int *)a3;
- (BOOL)isMmsConfiguredForSub:(id)a0;
- (void)sendMessageAsSmsToShortCodeRecipients:(id)a0 andReplaceData:(id *)a1;
- (void)setDeliveryReportsEnabled:(BOOL)a0;
- (BOOL)sendSMSWithText:(id)a0 text:(id)a1 serviceCenter:(id)a2 toAddress:(id)a3 withID:(unsigned int)a4;
- (id)deferredMessageWithId:(unsigned int)a0;
- (BOOL)simulateSmsReceived:(id)a0;
- (struct { int x0; int x1; })sendMMS:(id)a0;
- (BOOL)getCharacterCount:(long long *)a0 andMessageSplitThreshold:(long long *)a1 forSmsText:(id)a2;
- (struct { int x0; int x1; })sendMMSFromData:(id)a0 messageId:(unsigned int)a1 subSlot:(long long)a2;
- (struct { int x0; int x1; })isDeliveryReportsEnabled:(BOOL *)a0;
- (void)addMessageOfType:(int)a0 toArray:(id)a1 withIdsFromArray:(id)a2;
- (id)decodeMessage:(id)a0;
- (void)emergencySessionIntentEnd:(id)a0;
- (BOOL)isMmsEnabledForSub:(id)a0;
- (id)incomingMessageWithId:(unsigned int)a0;
- (struct { int x0; int x1; })send:(id)a0;

@end
