@class NSSet;

@interface MKPointOfInterestFilter : NSObject <NSSecureCoding, NSCopying> {
    NSSet *_includedCategories;
    NSSet *_excludedCategories;
}

@property (class, readonly, nonatomic) MKPointOfInterestFilter *filterIncludingAllCategories;
@property (class, readonly, nonatomic) MKPointOfInterestFilter *filterExcludingAllCategories;
@property (class, readonly) BOOL supportsSecureCoding;

- (id)initIncludingCategories:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)excludesCategory:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)includesCategory:(id)a0;
- (id)initExcludingCategories:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_excludesAllCategories;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToPointOfInterestFilter:(id)a0;
- (id)_geoPOICategoryFilter;
- (id)init;
- (id)initIncludingCategories:(id)a0 excludingCategories:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_includesAllCategories;

@end
