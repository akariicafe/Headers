@interface AVTAvatarDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (unsigned char)classIdentifier;
+ (id)avatarDictionaryFromDataRepresentation:(id)a0 error:(id *)a1;
+ (BOOL)canLoadDataRepresentation:(id)a0;
+ (BOOL)canLoadDataRepresentationWithVersion:(unsigned short)a0 minimumCompatibleVersion:(unsigned short)a1 error:(id *)a2;
+ (id)descriptorWithDataRepresentation:(id)a0 error:(id *)a1;
+ (id)descriptorWithURL:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)dataRepresentation;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionaryRepresentation:(id)a0 error:(id *)a1;
- (void)encodeInDictionaryRepresentation:(id)a0;

@end
