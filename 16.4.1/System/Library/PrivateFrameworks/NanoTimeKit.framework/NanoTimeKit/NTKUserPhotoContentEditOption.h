@class NSString;

@interface NTKUserPhotoContentEditOption : NTKEditOption

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) BOOL isDefaultPhoto;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
