@class NSString;

@interface PUPickerAssetMediaTypeFilter : NSObject <PUPickerFilter>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) BOOL isValidFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)generatedSearchQueryFilterOptions;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)generatedGenericAssetTypes;
- (id)generatedAssetPredicate;
- (id)initWithMediaType:(long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
