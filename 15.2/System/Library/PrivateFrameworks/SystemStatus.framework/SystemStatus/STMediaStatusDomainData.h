@class NSArray, NSSet, STActivityAttributionCatalog, NSString;

@interface STMediaStatusDomainData : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) STActivityAttributionCatalog *attributionCatalog;
@property (readonly, copy, nonatomic) NSArray *audioRecordingAttributionList;
@property (readonly, copy, nonatomic) NSArray *mutedAudioRecordingAttributionList;
@property (readonly, copy, nonatomic) NSArray *cameraCaptureAttributionList;
@property (readonly, copy, nonatomic) NSSet *audioRecordingAttributions;
@property (readonly, copy, nonatomic) NSSet *mutedAudioRecordingAttributions;
@property (readonly, copy, nonatomic) NSSet *cameraCaptureAttributions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (id)_initWithAttributionCatalog:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (id)diffFromData:(id)a0;
- (id)dataByApplyingDiff:(id)a0;
- (id)initWithAttributionCatalog:(id)a0;

@end
