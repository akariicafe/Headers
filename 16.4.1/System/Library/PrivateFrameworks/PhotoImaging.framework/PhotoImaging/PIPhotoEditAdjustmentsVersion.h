@class NSString;

@interface PIPhotoEditAdjustmentsVersion : NSObject

@property (readonly, weak, nonatomic) NSString *string;
@property (readonly, nonatomic) unsigned long long majorVersion;
@property (readonly, nonatomic) unsigned long long minorVersion;
@property (readonly, nonatomic) unsigned long long subMinorVersion;
@property (readonly, copy, nonatomic) NSString *platform;

+ (id)versionFromString:(id)a0;
+ (id)versionWithMajor:(unsigned long long)a0 minor:(unsigned long long)a1 subMinor:(unsigned long long)a2 platform:(id)a3;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (long long)asOrderedInteger;
- (id)initWithMajor:(unsigned long long)a0 minor:(unsigned long long)a1 subMinor:(unsigned long long)a2;
- (id)initWithMajor:(unsigned long long)a0 minor:(unsigned long long)a1 subMinor:(unsigned long long)a2 platform:(id)a3;
- (BOOL)isEqualToAdjustmentVersion:(id)a0;

@end
