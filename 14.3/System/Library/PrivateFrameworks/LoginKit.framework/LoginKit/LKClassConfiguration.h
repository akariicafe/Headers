@class NSMutableDictionary, NSDictionary, NSData, NSArray, NSString;

@interface LKClassConfiguration : NSObject <LKClassConfigurationProviding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMutableDictionary *classesByClassID;
@property (retain) NSMutableDictionary *usersWithAppleIDByIdentifier;
@property (retain) NSMutableDictionary *usersByUsername;
@property (retain) NSMutableDictionary *classesByClassGroupName;
@property (retain) NSDictionary *classRosterInformationDictionary;
@property (readonly, nonatomic) NSData *payloadCertificatePersistentID;
@property (retain, nonatomic) NSArray *classGroups;
@property (readonly, nonatomic) NSArray *instructors;
@property (readonly, copy, nonatomic) NSString *schoolName;
@property (copy, nonatomic) NSArray *students;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *classes;

- (void).cxx_destruct;
- (id)dictionary;
- (id)initWithPropertyList:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)classInfoForClassID:(id)a0;
- (id)studentForStudentIdentifier:(id)a0 inClass:(id)a1;
- (id)studentForStudentIdentifier:(id)a0;
- (id)studentForUsername:(id)a0 inClass:(id)a1;
- (id)studentForUsername:(id)a0;
- (id)classesByClassGroupNameDictionary;

@end
