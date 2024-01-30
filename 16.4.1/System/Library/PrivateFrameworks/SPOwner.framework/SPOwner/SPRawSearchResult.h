@class NSData, NSDate;

@interface SPRawSearchResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *hashedPublicKey;
@property (readonly, copy, nonatomic) NSData *publicKey;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic) double horizontalAccuracy;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)initWithHashedPublicKey:(id)a0 publicKey:(id)a1 status:(long long)a2 timestamp:(id)a3 latitude:(double)a4 longitude:(double)a5 horizontalAccuracy:(double)a6;

@end
