@class NSString;

@interface CNVCardNameComponents : NSObject <CNVCardNameDataSource>

@property (readonly, copy) NSString *formattedName;
@property (readonly) BOOL isCompany;
@property (readonly) NSString *firstName;
@property (readonly) NSString *lastName;
@property (readonly) NSString *middleName;
@property (readonly) NSString *title;
@property (readonly) NSString *suffix;
@property (readonly) NSString *companyName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)components;
+ (id)componentsWithFirstName:(id)a0 lastName:(id)a1 middleName:(id)a2 title:(id)a3 suffix:(id)a4 companyName:(id)a5 isCompany:(BOOL)a6;

- (void).cxx_destruct;

@end
