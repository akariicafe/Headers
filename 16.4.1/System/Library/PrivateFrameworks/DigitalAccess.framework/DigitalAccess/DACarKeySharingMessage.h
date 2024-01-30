@class DACarKeyAdditionalCrossPlatformSharingData, DACarKeyPrivateCrossPlatformSharingData, DACarKeyGenericCrossPlatformSharingData;

@interface DACarKeySharingMessage : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) DACarKeyGenericCrossPlatformSharingData *genericData;
@property (readonly, nonatomic) DACarKeyAdditionalCrossPlatformSharingData *additionalData;
@property (readonly, nonatomic) DACarKeyPrivateCrossPlatformSharingData *privateData;

+ (id)decodeWithData:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithGenericDataDictionary:(id)a0 additionalDataDictionary:(id)a1;
- (id)encodeWithError:(id *)a0;
- (id)initWithGenericCrossPlatformSharingData:(id)a0 additionalData:(id)a1 privateData:(id)a2;
- (id)initWithGenericCrossPlatformSharingData:(id)a0 additionalDataDictionary:(id)a1;

@end
