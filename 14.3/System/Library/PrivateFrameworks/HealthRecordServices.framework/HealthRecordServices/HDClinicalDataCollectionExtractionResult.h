@class NSArray, NSNumber;

@interface HDClinicalDataCollectionExtractionResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *redactedResources;
@property (readonly, copy, nonatomic) NSNumber *rulesVersion;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRedactedResources:(id)a0 rulesVersion:(id)a1;

@end
