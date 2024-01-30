@class NSArray;

@interface MADVITextLookupResult : MADResult

@property (readonly, nonatomic) NSArray *searchSections;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSearchSections:(id)a0;

@end
