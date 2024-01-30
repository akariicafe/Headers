@class NSString, NSData;

@interface PFUuidData : NSData {
    unsigned char _uuid[16];
}

@property (readonly, nonatomic) NSString *canonicalStringValue;
@property (readonly, nonatomic) NSString *mercuryStringValue;
@property (readonly, nonatomic) NSData *dataValue;
@property (readonly, nonatomic) BOOL isNull;

+ (BOOL)isMercuryBase64String:(id)a0;
+ (BOOL)isCanonicalUuidString:(id)a0;
+ (id)randomUuid;
+ (id)uuidWithBytes:(const void *)a0 length:(unsigned long long)a1;
+ (id)uuidWithData:(id)a0;
+ (id)uuidWithString:(id)a0;
+ (BOOL)isMercuryUuidString:(id)a0;
+ (BOOL)isSupportedUuidString:(id)a0;
+ (id)generateUuidAsCanonicalString;
+ (id)generateUuidAsMercuryString;
+ (id)nullUuid;
+ (id)hostUuid;

- (const void *)bytes;
- (unsigned long long)length;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)init;
- (BOOL)isEqualToData:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithString:(id)a0;
- (id)initWithMercuryBase64String:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initRandom;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initNull;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;

@end
