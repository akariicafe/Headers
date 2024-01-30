@class NSURL, MPModelStoreBrowseResponse;

@interface MPModelStoreBrowseRequest : MPStoreModelRequest

@property (copy, nonatomic) NSURL *loadAdditionalContentURL;
@property (retain, nonatomic) MPModelStoreBrowseResponse *previousRetrievedNestedResponse;
@property (nonatomic) long long domain;
@property (nonatomic) long long additionalContent;
@property (nonatomic) BOOL flattenRadioList;
@property (nonatomic) unsigned long long options;
@property (nonatomic) long long filteringPolicy;
@property (nonatomic) long long subscriptionStatus;
@property (retain, nonatomic) MPModelStoreBrowseResponse *previousResponse;
@property (nonatomic) long long requestEndpoint;

+ (id)allSupportedSectionProperties;
+ (BOOL)supportsSecureCoding;
+ (id)allSupportedItemProperties;

- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (void)configureWithParentSection:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
