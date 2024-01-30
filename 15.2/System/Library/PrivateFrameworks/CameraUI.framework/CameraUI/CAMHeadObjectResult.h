@class NSString, AVMetadataObject;

@interface CAMHeadObjectResult : NSObject <CAMMetadataObjectResult>

@property (retain, nonatomic) AVMetadataObject *_metadataHeadObject;
@property (readonly, copy, nonatomic) NSString *metadataType;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) AVMetadataObject *underlyingMetadataObject;
@property (readonly, nonatomic) unsigned long long syntheticFocusMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithHeadObject:(id)a0;

@end
