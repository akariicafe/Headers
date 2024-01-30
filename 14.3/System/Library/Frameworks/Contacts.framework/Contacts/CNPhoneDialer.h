@interface CNPhoneDialer : NSObject

+ (id)URLWithPhoneNumber:(id)a0;
+ (id)sanitizePhoneNumber:(id)a0;
+ (id)dialMessageWithDataValue:(id)a0 displayName:(id)a1;
+ (BOOL)sendMessage:(id)a0 error:(id *)a1;
+ (id)messageWithAdditionalParameters:(id)a0;
+ (void)loadIdentityServices;
+ (id)cancelMessageWithDialMessageID:(id)a0;
+ (id)dialNumber:(id)a0 displayName:(id)a1 error:(id *)a2;
+ (BOOL)cancelDialMessage:(id)a0 error:(id *)a1;
+ (id)sendDialMessage:(id)a0 displayName:(id)a1 error:(id *)a2;

@end
