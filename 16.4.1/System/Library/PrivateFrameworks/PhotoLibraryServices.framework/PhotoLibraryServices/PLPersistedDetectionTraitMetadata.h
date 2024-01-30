@class NSString;

@interface PLPersistedDetectionTraitMetadata : NSObject <NSSecureCoding, PLDetectionTraitRebuildDescription>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) short type;
@property (nonatomic) short value;
@property (nonatomic) double score;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_persistedDetectionTraitMetadataWithDetectionTrait:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)jsonDictionary;

@end
