@class NSDictionary, NTPBTodaySectionsMapping;

@interface FCPersonalizationTodaySectionMapping : NSObject {
    NTPBTodaySectionsMapping *_pbTodaySectionMapping;
}

@property (retain, nonatomic) NSDictionary *todaySectionIdentifiersToFRGroupViewExposureTypes;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPBTodaySectionMapping:(id)a0;
- (id)groupViewExposureTypesForTodaySectionIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
