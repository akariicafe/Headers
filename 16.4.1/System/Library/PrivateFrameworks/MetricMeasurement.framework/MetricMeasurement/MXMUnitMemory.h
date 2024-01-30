@interface MXMUnitMemory : NSDimension

@property (class, readonly) MXMUnitMemory *kilobits;
@property (class, readonly, getter=kilobits) MXMUnitMemory *kbs;
@property (class, readonly) MXMUnitMemory *kilobytes;
@property (class, readonly, getter=kilobytes) MXMUnitMemory *kBs;
@property (class, readonly) MXMUnitMemory *megabits;
@property (class, readonly, getter=megabits) MXMUnitMemory *Mbs;
@property (class, readonly) MXMUnitMemory *megabytes;
@property (class, readonly, getter=megabytes) MXMUnitMemory *MBs;
@property (class, readonly) MXMUnitMemory *gigabits;
@property (class, readonly, getter=gigabits) MXMUnitMemory *Gbs;
@property (class, readonly) MXMUnitMemory *gigabytes;
@property (class, readonly, getter=gigabytes) MXMUnitMemory *GBs;
@property (class, readonly) MXMUnitMemory *terabits;
@property (class, readonly) MXMUnitMemory *terabytes;
@property (class, readonly) MXMUnitMemory *petabits;
@property (class, readonly) MXMUnitMemory *petabytes;
@property (class, readonly) MXMUnitMemory *exabits;
@property (class, readonly) MXMUnitMemory *exabytes;
@property (class, readonly) MXMUnitMemory *kibibits;
@property (class, readonly, getter=kibibits) MXMUnitMemory *Kib;
@property (class, readonly) MXMUnitMemory *kibibytes;
@property (class, readonly, getter=kibibytes) MXMUnitMemory *KiB;
@property (class, readonly) MXMUnitMemory *mebibits;
@property (class, readonly) MXMUnitMemory *mebibytes;
@property (class, readonly) MXMUnitMemory *gibibits;
@property (class, readonly) MXMUnitMemory *gibibytes;
@property (class, readonly) MXMUnitMemory *tebibits;
@property (class, readonly) MXMUnitMemory *tebibytes;
@property (class, readonly) MXMUnitMemory *pebibits;
@property (class, readonly) MXMUnitMemory *pebibytes;
@property (class, readonly) MXMUnitMemory *exbibits;
@property (class, readonly) MXMUnitMemory *exbibytes;
@property (class, readonly) MXMUnitMemory *baseUnit;
@property (class, readonly) MXMUnitMemory *bits;
@property (class, readonly) MXMUnitMemory *nibbles;
@property (class, readonly, getter=nibbles) MXMUnitMemory *nybbles;
@property (class, readonly, getter=nibbles) MXMUnitMemory *nybles;
@property (class, readonly, getter=nibbles) MXMUnitMemory *halfbytes;
@property (class, readonly, getter=nibbles) MXMUnitMemory *tetrades;
@property (class, readonly, getter=nibbles) MXMUnitMemory *semioctets;
@property (class, readonly) MXMUnitMemory *bytes;
@property (class, readonly, getter=bytes) MXMUnitMemory *octets;


@end
