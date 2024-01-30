@class NSSet, NSString;

@interface PFPosterShuffleConfiguration : NSObject <NSSecureCoding, NSCopying, PFPosterConfigurationAnalyticsSupport>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL includePeople;
@property (nonatomic) BOOL includePets;
@property (nonatomic) BOOL includeLandscapes;
@property (nonatomic) BOOL includeCityscapes;
@property (nonatomic) long long shuffleType;
@property (nonatomic) long long shuffleFrequency;
@property (retain, nonatomic) NSSet *personLocalIdentifiers;
@property (nonatomic) unsigned long long shuffleSmartAlbums;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)analyticsPayload;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithShuffleType:(long long)a0;

@end
