@interface IMIDSUtilities : NSObject

+ (int)verifyFromID:(id)a0 comesFromAccount:(id)a1;
+ (void)findCommonCapabilitiesAcrossRecipients:(id)a0 serviceName:(id)a1 capsToCheck:(id)a2 completion:(id /* block */)a3;

@end
