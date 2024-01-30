@class NSData, NSString;

@interface KCAESGCMDuplexSession : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL asSender;
@property unsigned long long context;
@property (retain) NSData *secret;
@property struct { unsigned char x0[16]; } *send;
@property struct { unsigned char x0[16]; } *receive;
@property (retain) NSString *pairingUUID;
@property unsigned long long piggybackingVersion;
@property unsigned long long epoch;

+ (id)sessionAsSender:(id)a0 context:(unsigned long long)a1;
+ (id)sessionAsReceiver:(id)a0 context:(unsigned long long)a1;

- (void)encodeWithCoder:(id)a0;
- (void)finalize;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initAsSender:(id)a0 context:(unsigned long long)a1;
- (id)initAsReceiver:(id)a0 context:(unsigned long long)a1;
- (id)initWithSecret:(id)a0 context:(unsigned long long)a1 as:(BOOL)a2;
- (id)initWithSecret:(id)a0 context:(unsigned long long)a1 as:(BOOL)a2 pairingUUID:(id)a3 piggybackingVersion:(unsigned long long)a4 epoch:(unsigned long long)a5;
- (unsigned long long)encryptCapsuleSize:(id)a0 IV:(id)a1;
- (BOOL)GCM:(const struct ccmode_gcm { unsigned long long x0; int x1; unsigned long long x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void *x9; } *)a0 context:(struct { unsigned char x0[16]; } *)a1 iv:(id)a2 size:(unsigned long long)a3 data:(const char *)a4 processed:(char *)a5 tag:(char *)a6 error:(id *)a7;
- (id)encrypt:(id)a0 error:(id *)a1;
- (id)decryptAndVerify:(id)a0 error:(id *)a1;

@end
