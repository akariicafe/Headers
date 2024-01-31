@interface CNPhoneDialer : NSObject

+ (id)cancelMessageWithDialMessageID:(id)a0;
+ (id)URLWithPhoneNumber:(id)a0;
+ (BOOL)cancelDialMessage:(id)a0 error:(id *)a1;
+ (id)dialMessageWithDataValue:(id)a0 displayName:(id)a1;
+ (id)dialNumber:(id)a0 displayName:(id)a1 error:(id *)a2;
+ (void)loadIdentityServices;
+ (id)messageWithAdditionalParameters:(id)a0;
+ (id)sanitizePhoneNumber:(id)a0;
+ (id)sendDialMessage:(id)a0 displayName:(id)a1 error:(id *)a2;
+ (BOOL)sendMessage:(id)a0 error:(id *)a1;

@end
