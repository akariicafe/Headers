@interface HAPProtocolMessages : HMFObject

+ (id)logCategory;
+ (BOOL)_parseEmptyResponse:(id)a0 expectedTID:(unsigned char)a1 withHeader:(BOOL)a2;
+ (id)constructAuthChallengeRequest:(id)a0 nonce:(id)a1 outTID:(char *)a2;
+ (id)constructInfoRequest:(id)a0 outTID:(char *)a1;
+ (id)constructInfoRequest:(id)a0 serviceUUID:(id)a1 outTID:(char *)a2;
+ (id)constructRequestHeaderFor:(unsigned long long)a0 instanceID:(id)a1 outTID:(char *)a2;
+ (id)constructTokenRequest:(id)a0 outTID:(char *)a1;
+ (id)constructTokenUpdateRequest:(id)a0 token:(id)a1 outTID:(char *)a2;
+ (BOOL)parseAuthChallengeResponse:(id)a0 expectedTID:(unsigned char)a1 outChallengeResponse:(id *)a2 outMFICert:(id *)a3 withHeader:(BOOL)a4;
+ (id)parseInfoResponse:(id)a0 expectedTID:(unsigned char)a1 withHeader:(BOOL)a2;
+ (BOOL)parseTokenResponse:(id)a0 expectedTID:(unsigned char)a1 withHeader:(BOOL)a2 outToken:(id *)a3 outUUID:(id *)a4;
+ (BOOL)parseTokenUpdateResponse:(id)a0 expectedTID:(unsigned char)a1 withHeader:(BOOL)a2;

@end
