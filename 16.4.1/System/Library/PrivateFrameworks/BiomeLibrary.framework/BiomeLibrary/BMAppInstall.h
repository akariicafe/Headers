@class NSString, NSArray;

@interface BMAppInstall : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSArray *subCategories;
@property (readonly, nonatomic) BOOL isInstall;
@property (nonatomic) BOOL hasIsInstall;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0 title:(id)a1 category:(id)a2 subCategories:(id)a3 isInstall:(id)a4;

@end
