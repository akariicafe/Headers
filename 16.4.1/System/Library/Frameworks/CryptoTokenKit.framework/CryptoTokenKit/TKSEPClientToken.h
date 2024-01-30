@interface TKSEPClientToken : TKClientToken

+ (BOOL)handlesTokenID:(id)a0;
+ (id)builtinTokenIDs;

- (id)initWithTokenID:(id)a0 serverEndpoint:(id)a1 targetUID:(id)a2;

@end
