@class NSURL, NSString, MPModelStoreBrowseResponse;

@interface MPModelStoreBrowseRoomRequest : MPStoreModelRequest

@property (copy, nonatomic) NSURL *loadAdditionalContentURL;
@property (copy, nonatomic) NSString *roomID;
@property (retain, nonatomic) MPModelStoreBrowseResponse *previousRetrievedNestedResponse;
@property (retain, nonatomic) MPModelStoreBrowseResponse *previousResponse;

+ (id)allSupportedSectionProperties;
+ (BOOL)supportsSecureCoding;
+ (id)allSupportedItemProperties;

- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (void)configureWithParentSection:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
