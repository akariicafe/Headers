@class NSData;

@interface AFMyriadPerceptualAudioHash : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *data;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBuilder:(id /* block */)a0;

@end
