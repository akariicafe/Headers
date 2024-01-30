@class NSString, AFExperimentGroup, NSArray;

@interface AFExperimentConfiguration : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) AFExperimentGroup *controlGroup;
@property (readonly, copy, nonatomic) NSArray *experimentGroups;
@property (readonly, copy, nonatomic) NSString *salt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)buildDictionaryRepresentation;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithType:(long long)a0 identifier:(id)a1 version:(id)a2 controlGroup:(id)a3 experimentGroups:(id)a4 salt:(id)a5;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
