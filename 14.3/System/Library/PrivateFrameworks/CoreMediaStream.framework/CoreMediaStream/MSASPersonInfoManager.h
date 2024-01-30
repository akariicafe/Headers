@class NSString, NSMutableDictionary;

@interface MSASPersonInfoManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *personIDToPersonInfoDictionary;
@property (retain, nonatomic) NSString *pathForPersonInfoDictionary;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedManager;

- (void)initWithPath:(id)a0;
- (id)fullNameForPersonID:(id)a0;
- (id)lastNameForPersonID:(id)a0;
- (id)firstNameForPersonID:(id)a0;
- (id)emailForPersonID:(id)a0;
- (void).cxx_destruct;
- (BOOL)updateWithSharingRelationship:(id)a0;

@end
