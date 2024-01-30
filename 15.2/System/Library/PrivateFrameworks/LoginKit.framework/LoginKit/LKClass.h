@class NSString, NSArray, NSMutableDictionary, NSNumber;

@interface LKClass : NSObject <LKStudentProviding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *classDescription;
@property (retain, nonatomic) NSString *className;
@property (retain, nonatomic) NSString *classImageURL;
@property (retain, nonatomic) NSNumber *classID;
@property (retain, nonatomic) NSArray *instructors;
@property (retain, nonatomic) NSMutableDictionary *avatarNameSimilarityDictionary;
@property (retain, nonatomic) NSMutableDictionary *givenNameSimilarityDictionary;
@property (copy, nonatomic) NSArray *students;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToLKClass:(id)a0;
- (id)sortUsers:(id)a0;
- (void)_updateNamingSimilarityInfoForUser:(id)a0;
- (id)initWithStudents:(id)a0 instructors:(id)a1 className:(id)a2 classID:(id)a3;
- (id)initWithClassDictionary:(id)a0 usersByUserIdentifier:(id)a1;

@end
