@class NSString;

@interface PMLSessionDescriptor : NSObject <NSCopying, PMLPlistAndChunksSerializableProtocol>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) float featureVersion;
@property (readonly, nonatomic) NSString *locale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForName:(id)a0 version:(id)a1 locale:(id)a2;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toPlistWithChunks:(id)a0;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)initWithName:(id)a0 version:(id)a1 locale:(id)a2;
- (float)_parseFeatureVersion:(id)a0 descriptor:(id)a1;
- (id)subSessionDescriptorForLabel:(unsigned long long)a0;
- (id)baseSessionDescriptor;
- (BOOL)isSubSessionDescriptor;
- (unsigned long long)subSessionLabel;

@end
