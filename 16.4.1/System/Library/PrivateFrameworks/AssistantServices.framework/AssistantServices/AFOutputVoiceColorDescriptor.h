@class NSString;

@interface AFOutputVoiceColorDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *hexColor;
@property (readonly, copy, nonatomic) NSString *colorName;
@property (readonly, nonatomic) float alpha;
@property (readonly, copy, nonatomic) NSString *localizedOutputVoiceColor;
@property (readonly, copy, nonatomic) NSString *localizedOutputVoice;

+ (id)newWithBuilder:(id /* block */)a0;

- (void)encodeWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithHexColor:(id)a0 colorName:(id)a1 alpha:(float)a2 localizedOutputVoiceColor:(id)a3 localizedOutputVoice:(id)a4;

@end
