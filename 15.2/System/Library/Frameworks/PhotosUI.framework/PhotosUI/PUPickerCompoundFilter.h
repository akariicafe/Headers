@class NSArray, NSString;

@interface PUPickerCompoundFilter : NSObject <PUPickerFilter>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long filterType;
@property (readonly, copy, nonatomic) NSArray *subfilters;
@property (readonly, nonatomic) BOOL isValidFilter;
@property (readonly, nonatomic) BOOL allowsSearch;
@property (readonly, nonatomic) BOOL allowsAlbums;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithFilterType:(long long)a0 subfilters:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)generatedRequiredAssetTypes;
- (unsigned long long)generatedPossibleAssetTypes;
- (id)generatedAssetPredicate;

@end
