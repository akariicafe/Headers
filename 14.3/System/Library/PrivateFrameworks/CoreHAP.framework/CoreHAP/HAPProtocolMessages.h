@interface HAPProtocolMessages : HMFObject

+ (id)logCategory;
+ (id)constructTokenRequest:(id)a0 outTID:(char *)a1;
+ (BOOL)parseTokenResponse:(id)a0 expectedTID:(unsigned char)a1 withHeader:(BOOL)a2 outToken:(id *)a3 outUUID:(id *)a4;
+ (id)constructTokenUpdateRequest:(id)a0 token:(id)a1 outTID:(char *)a2;
+ (BOOL)parseTokenUpdateResponse:(id)a0 expectedTID:(unsigned char)a1 withHeader:(BOOL)a2;
+ (id)parseInfoResponse:(id)a0 expectedTID:(unsigned char)a1 withHeader:(BOOL)a2;
+ (id)constructInfoRequest:(id)a0 outTID:(char *)a1;
+ (id)constructRequestHeaderFor:(unsigned long long)a0 instanceID:(id)a1 outTID:(char *)a2;
+ (id)constructInfoRequest:(id)a0 serviceUUID:(id)a1 outTID:(char *)a2;

@end
