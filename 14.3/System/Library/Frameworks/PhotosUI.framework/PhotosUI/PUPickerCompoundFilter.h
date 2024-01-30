@class NSArray, NSString;

@interface PUPickerCompoundFilter : NSObject <PUPickerFilter>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long filterType;
@property (readonly, copy, nonatomic) NSArray *subfilters;
@property (readonly, nonatomic) BOOL isValidFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)generatedSearchQueryFilterOptions;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)generatedGenericAssetTypes;
- (id)generatedAssetPredicate;
- (id)initWithFilterType:(long long)a0 subfilters:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
