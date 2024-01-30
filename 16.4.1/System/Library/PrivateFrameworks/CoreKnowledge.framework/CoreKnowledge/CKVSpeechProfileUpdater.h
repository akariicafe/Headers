@class NSString, CKVSpeechCategoryGroup, CESRSpeechProfileBuilder, CKVSpeechProfileLog, NSObject;
@protocol CKVDatabaseReadOnlyAccess;

@interface CKVSpeechProfileUpdater : NSObject {
    CKVSpeechCategoryGroup *_group;
    NSString *_description;
    NSObject<CKVDatabaseReadOnlyAccess> *_database;
    CKVSpeechProfileLog *_log;
}

@property (readonly, nonatomic) CESRSpeechProfileBuilder *builder;

+ (void)deleteLegacyProfiles;
+ (void)verifyProfileWithUserId:(id)a0 description:(id)a1 profileDirectory:(id)a2 protectionClass:(int)a3 database:(id)a4 settings:(id)a5;
+ (void)_updateProfileVersion:(id)a0 withRetry:(BOOL)a1 group:(id)a2 log:(id)a3 userId:(id)a4 description:(id)a5 profileDirectory:(id)a6 protectionClass:(int)a7 database:(id)a8 updateType:(unsigned char)a9;
+ (void)registerUpdateForItemType:(long long)a0 originAppId:(id)a1 fieldTypes:(id)a2 options:(unsigned short)a3 userId:(id)a4 description:(id)a5 profileDirectory:(id)a6 protectionClass:(int)a7 database:(id)a8 settings:(id)a9;
+ (void)_removeProfileWithLog:(id)a0 userId:(id)a1 profileDirectory:(id)a2;
+ (void)rebuildProfileWithUserId:(id)a0 description:(id)a1 profileDirectory:(id)a2 protectionClass:(int)a3 database:(id)a4 settings:(id)a5;

- (void)_endSpeechProfileUpdateSignpost:(unsigned long long)a0 updateResult:(unsigned char)a1 updateType:(unsigned char)a2 itemCount:(unsigned long long)a3;
- (BOOL)_updateProfile:(id)a0 withType:(unsigned char)a1 error:(id *)a2;
- (id)_versionForCategory:(id)a0 error:(id *)a1;
- (id)description;
- (id)initWithBuilder:(id)a0 description:(id)a1 database:(id)a2 group:(id)a3 log:(id)a4;
- (void).cxx_destruct;

@end
