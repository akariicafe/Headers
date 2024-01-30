@class NSString, NSUUID;

@interface _SFBrowserWindowStateData : NSObject

@property (nonatomic) long long databaseID;
@property (retain, nonatomic) NSString *UUIDString;
@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) NSString *sceneID;
@property (nonatomic) long long type;
@property (nonatomic) long long activeDocumentIndex;
@property (nonatomic) long long activePrivateDocumentIndex;
@property (nonatomic) BOOL isActiveDocumentValid;
@property (nonatomic) BOOL isTabStateSuccessfullyLoaded;
@property (nonatomic) long long legacyPlistFileVersion;
@property (readonly, nonatomic) BOOL isInDatabase;
@property (nonatomic) BOOL needsQuickUpdate;

- (id)initWithUUIDString:(id)a0 sceneID:(id)a1;
- (id)debugDescription;
- (id)initWithDictionaryPresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryPresentation;
- (id)initWithSQLiteRow:(id)a0;
- (void).cxx_destruct;

@end
