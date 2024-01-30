@class NSArray, NSNumber, NSString;

@interface SASAcousticFeature : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *acousticFeaturePerFrame;
@property (copy, nonatomic) NSNumber *frameDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)acousticFeature;
+ (id)acousticFeatureWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
