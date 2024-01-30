@class MPCModelGenericAVItemTimedMetadataStreamFields, MPModelResponse, NSData, MPSectionedCollection;

@interface MPCModelGenericAVItemTimedMetadataResponse : MPModelResponse {
    MPModelResponse *_personalizationResponse;
}

@property (nonatomic, getter=isFirstResponse) BOOL firstResponse;
@property (nonatomic, getter=isFinalResponse) BOOL finalResponse;
@property (copy, nonatomic) NSData *adamIDData;
@property (retain, nonatomic) MPCModelGenericAVItemTimedMetadataStreamFields *streamFields;
@property (copy, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_personalizationResponseDidInvalidateNotification:(id)a0;
- (id)initWithRequest:(id)a0 personalizationResponse:(id)a1 firstResponse:(BOOL)a2 finalResponse:(BOOL)a3;

@end
