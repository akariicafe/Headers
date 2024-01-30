@interface NTKUserPhotoEditOption : NTKEditOption

@property (nonatomic) BOOL usesDefaultPhoto;

+ (BOOL)supportsSecureCoding;
+ (id)optionUsingDefaultPhoto:(BOOL)a0 forDevice:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)JSONObjectRepresentation;
- (id)dailySnapshotKey;
- (id)initWithJSONObjectRepresentation:(id)a0 forDevice:(id)a1;
- (BOOL)isValidOption;

@end
