@class NSURL;

@interface MPModelForYouRecommendationsRequest : MPStoreModelRequest

@property (nonatomic) long long filteringPolicy;
@property (nonatomic) long long requestEndpoint;
@property (nonatomic) long long mode;
@property (nonatomic) long long types;
@property (nonatomic) BOOL withSocial;
@property (nonatomic) BOOL withPlainEditorialNotes;
@property (nonatomic) long long displayFilterKinds;
@property (nonatomic) BOOL withRecentlyPlayed;
@property (copy, nonatomic) NSURL *customForYouURL;

+ (id)allSupportedSectionProperties;
+ (BOOL)supportsSecureCoding;
+ (id)allSupportedItemProperties;

- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
