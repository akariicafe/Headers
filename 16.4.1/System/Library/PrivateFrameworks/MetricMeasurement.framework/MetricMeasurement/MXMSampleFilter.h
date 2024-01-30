@class NSSet, NSMutableDictionary;

@interface MXMSampleFilter : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSSet *tagFilters;
@property (retain, nonatomic) NSMutableDictionary *attributeFilters;
@property (readonly, nonatomic) BOOL finite;
@property (readonly, nonatomic, getter=finite) BOOL isFinite;

+ (id)filterWithAttributeFilter:(id)a0;
+ (id)filterWithAttributeFilter:(id)a0 tagFilter:(id)a1;
+ (id)filterWithAttributeFilters:(id)a0;
+ (id)filterWithTagFilter:(id)a0;
+ (id)filterWithTagFilters:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (void).cxx_destruct;
- (void)addAttributeFilters:(id)a0;
- (id)attributeFilterWithName:(id)a0;
- (id)initWithAttributeFilter:(id)a0;
- (id)initWithAttributeFilter:(id)a0 tagFilter:(id)a1;
- (id)initWithAttributeFilters:(id)a0;
- (id)initWithAttributeFilters:(id)a0 tagFilters:(id)a1;
- (id)initWithTagFilter:(id)a0;
- (id)initWithTagFilters:(id)a0;
- (BOOL)matchesSample:(id)a0;
- (BOOL)matchesSampleSet:(id)a0;
- (BOOL)matchesSamplesWithAttribute:(id)a0;
- (BOOL)matchesSamplesWithAttributes:(id)a0;
- (BOOL)matchesSamplesWithTag:(id)a0;

@end
