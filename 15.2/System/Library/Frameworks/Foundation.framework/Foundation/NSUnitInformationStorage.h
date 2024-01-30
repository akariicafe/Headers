@interface NSUnitInformationStorage : NSDimension <NSSecureCoding>

@property (class, readonly, copy) NSUnitInformationStorage *bytes;
@property (class, readonly, copy) NSUnitInformationStorage *bits;
@property (class, readonly, copy) NSUnitInformationStorage *nibbles;
@property (class, readonly, copy) NSUnitInformationStorage *yottabytes;
@property (class, readonly, copy) NSUnitInformationStorage *zettabytes;
@property (class, readonly, copy) NSUnitInformationStorage *exabytes;
@property (class, readonly, copy) NSUnitInformationStorage *petabytes;
@property (class, readonly, copy) NSUnitInformationStorage *terabytes;
@property (class, readonly, copy) NSUnitInformationStorage *gigabytes;
@property (class, readonly, copy) NSUnitInformationStorage *megabytes;
@property (class, readonly, copy) NSUnitInformationStorage *kilobytes;
@property (class, readonly, copy) NSUnitInformationStorage *yottabits;
@property (class, readonly, copy) NSUnitInformationStorage *zettabits;
@property (class, readonly, copy) NSUnitInformationStorage *exabits;
@property (class, readonly, copy) NSUnitInformationStorage *petabits;
@property (class, readonly, copy) NSUnitInformationStorage *terabits;
@property (class, readonly, copy) NSUnitInformationStorage *gigabits;
@property (class, readonly, copy) NSUnitInformationStorage *megabits;
@property (class, readonly, copy) NSUnitInformationStorage *kilobits;
@property (class, readonly, copy) NSUnitInformationStorage *yobibytes;
@property (class, readonly, copy) NSUnitInformationStorage *zebibytes;
@property (class, readonly, copy) NSUnitInformationStorage *exbibytes;
@property (class, readonly, copy) NSUnitInformationStorage *pebibytes;
@property (class, readonly, copy) NSUnitInformationStorage *tebibytes;
@property (class, readonly, copy) NSUnitInformationStorage *gibibytes;
@property (class, readonly, copy) NSUnitInformationStorage *mebibytes;
@property (class, readonly, copy) NSUnitInformationStorage *kibibytes;
@property (class, readonly, copy) NSUnitInformationStorage *yobibits;
@property (class, readonly, copy) NSUnitInformationStorage *zebibits;
@property (class, readonly, copy) NSUnitInformationStorage *exbibits;
@property (class, readonly, copy) NSUnitInformationStorage *pebibits;
@property (class, readonly, copy) NSUnitInformationStorage *tebibits;
@property (class, readonly, copy) NSUnitInformationStorage *gibibits;
@property (class, readonly, copy) NSUnitInformationStorage *mebibits;
@property (class, readonly, copy) NSUnitInformationStorage *kibibits;
@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (id)icuType;
+ (id)baseUnit;
+ (id)_measurementWithNaturalScale:(id)a0 system:(unsigned long long)a1;

@end
