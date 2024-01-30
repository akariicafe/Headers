@interface NTKUserPhotoEditOption : NTKEditOption

@property (nonatomic) BOOL usesDefaultPhoto;

+ (BOOL)supportsSecureCoding;
+ (id)optionUsingDefaultPhoto:(BOOL)a0 forDevice:(id)a1;

- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)dailySnapshotKey;
- (id)JSONObjectRepresentation;
- (BOOL)isValidOption;
- (id)initWithJSONObjectRepresentation:(id)a0 forDevice:(id)a1;

@end
