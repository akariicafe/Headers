@class NSSet;

@interface MKPointOfInterestFilter : NSObject <NSSecureCoding, NSCopying> {
    NSSet *_includedCategories;
    NSSet *_excludedCategories;
}

@property (class, readonly, nonatomic) MKPointOfInterestFilter *filterIncludingAllCategories;
@property (class, readonly, nonatomic) MKPointOfInterestFilter *filterExcludingAllCategories;
@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)_geoPOICategoryFilter;
- (BOOL)_excludesAllCategories;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initExcludingCategories:(id)a0;
- (id)initIncludingCategories:(id)a0;
- (BOOL)isEqualToPointOfInterestFilter:(id)a0;
- (BOOL)_includesAllCategories;
- (BOOL)includesCategory:(id)a0;
- (id)initIncludingCategories:(id)a0 excludingCategories:(id)a1;
- (BOOL)excludesCategory:(id)a0;

@end
