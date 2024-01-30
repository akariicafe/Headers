@class NSArray, NSString, PFPosterShuffleConfiguration;

@interface PFPosterDescriptor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isBlankTemplate;
@property (readonly, nonatomic) long long posterType;
@property (readonly, nonatomic) long long descriptorType;
@property (readonly, nonatomic) NSArray *media;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *displayNameLocalizationKey;
@property (retain, nonatomic) NSString *styleCategory;
@property (retain, nonatomic) PFPosterShuffleConfiguration *shuffleConfiguration;

+ (id)loadFromURL:(id)a0 error:(id *)a1;
+ (id)descriptorIdentifierForDescriptorType:(long long)a0 uuids:(id)a1;
+ (long long)descriptorTypeFromTypeString:(id)a0;
+ (id)descriptorTypeStringWithType:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDescriptorType:(long long)a0 media:(id)a1;
- (BOOL)saveToURL:(id)a0 error:(id *)a1;

@end
