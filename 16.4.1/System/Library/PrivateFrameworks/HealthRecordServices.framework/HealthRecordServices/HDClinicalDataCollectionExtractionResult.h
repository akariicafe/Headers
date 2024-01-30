@class NSArray, NSNumber;

@interface HDClinicalDataCollectionExtractionResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *redactedResources;
@property (readonly, copy, nonatomic) NSNumber *rulesVersion;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithRedactedResources:(id)a0 rulesVersion:(id)a1;

@end
