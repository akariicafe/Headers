@class NSString, NSNumber;

@interface EDAMBusinessUserAttributes : FATObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSString *department;
@property (retain, nonatomic) NSString *mobilePhone;
@property (retain, nonatomic) NSString *linkedInProfileUrl;
@property (retain, nonatomic) NSString *workPhone;
@property (retain, nonatomic) NSNumber *companyStartDate;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
