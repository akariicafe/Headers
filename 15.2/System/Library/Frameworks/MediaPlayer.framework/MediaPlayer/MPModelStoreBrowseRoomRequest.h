@class NSURL, NSString, MPModelStoreBrowseResponse;

@interface MPModelStoreBrowseRoomRequest : MPStoreModelRequest

@property (copy, nonatomic) NSURL *loadAdditionalContentURL;
@property (copy, nonatomic) NSString *roomID;
@property (retain, nonatomic) MPModelStoreBrowseResponse *previousRetrievedNestedResponse;
@property (retain, nonatomic) MPModelStoreBrowseResponse *previousResponse;

+ (BOOL)supportsSecureCoding;
+ (id)allSupportedItemProperties;
+ (id)allSupportedSectionProperties;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)configureWithParentSection:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newOperationWithResponseHandler:(id /* block */)a0;

@end
