@class NSString;

@interface NTKUserPhotoContentEditOption : NTKEditOption

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) BOOL isDefaultPhoto;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
