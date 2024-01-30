@class NSString, NSNumber;

@interface AXImageCaptionModelAssetAssertion : NSObject <AXAssetAssertion>

@property (nonatomic) unsigned long long assertionType;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSNumber *minimumCompatibilityVersion;
@property (retain, nonatomic) NSNumber *maximumCompatibilityVersion;
@property (retain, nonatomic) NSString *modelVersion;
@property (retain, nonatomic) NSString *modelLanguage;
@property (retain, nonatomic) NSString *modelStage;
@property (readonly, nonatomic) NSString *assetType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assertionWithPropertyListRepresentation:(id)a0 error:(id *)a1;
+ (id)assertionsWithPropertyListRepresentations:(id)a0;
+ (void)partitionAssertionsWithPropertyListRepresentations:(id)a0 intoVersionLockedAssertions:(id)a1 upgradableAssertions:(id)a2;

- (id)propertyListRepresentation;
- (void).cxx_destruct;

@end
