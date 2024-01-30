@class NSString, NSData;

@interface PFUuidData : NSData {
    unsigned char _uuid[16];
}

@property (readonly, nonatomic) NSString *canonicalStringValue;
@property (readonly, nonatomic) NSString *mercuryStringValue;
@property (readonly, nonatomic) NSData *dataValue;
@property (readonly, nonatomic) BOOL isNull;

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
+ (BOOL)isMercuryBase64String:(id)a0;

- (BOOL)isEqualToData:(id)a0;
- (id)initWithString:(id)a0;
- (unsigned long long)length;
- (void)encodeWithCoder:(id)a0;
- (id)initNull;
- (id)initRandom;
- (id)initWithData:(id)a0;
- (id)description;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (const void *)bytes;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithMercuryBase64String:(id)a0;

@end
