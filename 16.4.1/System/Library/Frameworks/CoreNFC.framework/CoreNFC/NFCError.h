@interface NFCError : NSError

+ (id)errorWithCode:(long long)a0 userInfo:(id)a1;
+ (id)errorWithCode:(long long)a0;
+ (id)errorWithNFCDError:(id)a0 defaultNFCErrorCode:(long long)a1;

- (id)initWithCode:(long long)a0 userInfo:(id)a1;

@end
