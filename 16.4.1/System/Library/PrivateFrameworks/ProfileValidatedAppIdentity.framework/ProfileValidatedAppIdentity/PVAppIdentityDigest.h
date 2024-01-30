@class NSNumber, NSData, NSError;

@interface PVAppIdentityDigest : NSObject <NSSecureCoding> {
    NSNumber *version;
    NSData *data1;
    NSData *data2;
    NSData *data3;
    NSData *data4;
    NSData *data5;
    NSError *error;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)digestWithErrorCode:(long long)a0;
+ (id)digestWithTimeoutError;

- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)getError;
- (void).cxx_destruct;
- (id)initWithError:(id)a0 version:(id)a1;
- (id)initWithVersion:(id)a0 data1:(id)a1 data2:(id)a2 data3:(id)a3 data4:(id)a4 data5:(id)a5;

@end
