@class NSArray, NSString, AVMetadataObject;

@interface CAMSubjectGroupResult : NSObject <CAMMetadataObjectResult>

@property (nonatomic) long long _groupID;
@property (readonly, copy, nonatomic) NSArray *metadataObjects;
@property (readonly, copy, nonatomic) NSString *metadataType;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) AVMetadataObject *underlyingMetadataObject;
@property (readonly, nonatomic) unsigned long long syntheticFocusMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMetadataObjects:(id)a0 groupID:(long long)a1;

@end
