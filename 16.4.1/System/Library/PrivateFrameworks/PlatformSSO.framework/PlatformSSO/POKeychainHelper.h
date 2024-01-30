@interface POKeychainHelper : NSObject

- (int)addTokens:(id)a0 metaData:(id)a1 toKeychainForService:(id)a2 username:(id)a3;
- (int)removeTokensFromKeychainWithService:(id)a0 username:(id)a1;
- (int)retrieveTokensFromKeychainForService:(id)a0 username:(id)a1 returningTokens:(id *)a2 metaData:(id *)a3;

@end
