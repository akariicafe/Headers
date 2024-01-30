@class NSString;

@interface AVTAnimojiDescriptor : AVTAvatarDescriptor

@property (copy, nonatomic) NSString *name;

+ (unsigned char)classIdentifier;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionaryRepresentation:(id)a0 error:(id *)a1;
- (void)encodeInDictionaryRepresentation:(id)a0;
- (id)initWithAnimoji:(id)a0;

@end
