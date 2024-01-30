@class NSString;

@interface CKVAppInfo : NSObject <CKVocabularyItem>

@property (readonly, nonatomic) NSString *itemId;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *appName;
@property (readonly, nonatomic) NSString *displayAppName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)appInfoFromInstalledApp:(id)a0 languageCode:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithItemId:(id)a0 bundleId:(id)a1 appName:(id)a2 displayAppName:(id)a3;
- (id)initWithInstalledApp:(id)a0 languageCode:(id)a1;
- (BOOL)isEqualToAppInfo:(id)a0;

@end
