@interface ICCipherV1 : NSObject

+ (id)ic_decrypt:(id)a0 withKey:(id)a1 tag:(id)a2 initialVector:(id)a3 error:(id *)a4;
+ (id)ic_encrypt:(id)a0 withKey:(id)a1 tag:(id *)a2 initialVector:(id *)a3 error:(id *)a4;
+ (id)ic_keyWithUserPassphrase:(id)a0 salt:(id)a1 iterationCount:(unsigned long long)a2 error:(id *)a3;
+ (id)ic_unwrap:(id)a0 withWrapper:(id)a1 error:(id *)a2;
+ (id)ic_wrap:(id)a0 withWrapper:(id)a1 error:(id *)a2;

@end
