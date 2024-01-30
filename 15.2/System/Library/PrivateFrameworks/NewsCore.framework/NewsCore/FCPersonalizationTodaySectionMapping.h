@class NSDictionary, NTPBTodaySectionsMapping;

@interface FCPersonalizationTodaySectionMapping : NSObject {
    NTPBTodaySectionsMapping *_pbTodaySectionMapping;
}

@property (retain, nonatomic) NSDictionary *todaySectionIdentifiersToFRGroupViewExposureTypes;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPBTodaySectionMapping:(id)a0;
- (id)groupViewExposureTypesForTodaySectionIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
