@class DMFControlGroupIdentifier, NSString, NSData, NSArray;

@interface CRKCourseInvitation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) DMFControlGroupIdentifier *courseIdentifier;
@property (readonly, copy, nonatomic) NSString *courseName;
@property (readonly, copy, nonatomic) NSString *courseDescription;
@property (readonly, nonatomic) unsigned long long courseMascotType;
@property (readonly, nonatomic) unsigned long long courseColorType;
@property (readonly, copy, nonatomic) NSString *instructorName;
@property (readonly, copy, nonatomic) NSData *instructorImageData;
@property (readonly, copy, nonatomic) NSArray *anchorCertificateDatas;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCourseIdentifier:(id)a0 courseName:(id)a1 courseDescription:(id)a2 instructorName:(id)a3 instructorImageData:(id)a4 anchorCertificates:(id)a5;
- (id)initWithCourseIdentifier:(id)a0 courseName:(id)a1 courseDescription:(id)a2 courseMascotType:(unsigned long long)a3 courseColorType:(unsigned long long)a4 instructorName:(id)a5 instructorImageData:(id)a6 anchorCertificates:(id)a7;
- (id)initWithCourseIdentifier:(id)a0 courseName:(id)a1 courseDescription:(id)a2 courseMascotType:(unsigned long long)a3 courseColorType:(unsigned long long)a4 instructorName:(id)a5 instructorImageData:(id)a6 anchorCertificateDatas:(id)a7;
- (id)initWithCourseIdentifier:(id)a0 courseName:(id)a1 courseDescription:(id)a2 instructorName:(id)a3 anchorCertificates:(id)a4;
- (id)initWithCourseIdentifier:(id)a0 courseName:(id)a1 courseDescription:(id)a2 courseMascotType:(unsigned long long)a3 courseColorType:(unsigned long long)a4 instructorName:(id)a5 anchorCertificates:(id)a6;
- (id)initWithCourseIdentifier:(id)a0 courseName:(id)a1 courseDescription:(id)a2 courseMascotType:(unsigned long long)a3 courseColorType:(unsigned long long)a4 instructorName:(id)a5 anchorCertificateDatas:(id)a6;

@end
