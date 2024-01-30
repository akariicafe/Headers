@class NSString;

@interface BMAdPlatformsDiscardReasons : BMEventBase <BMStoreData>

@property (readonly, nonatomic) int discardReason;
@property (readonly, nonatomic) int placement;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) unsigned long long brandIdentifier;
@property (nonatomic) BOOL hasBrandIdentifier;
@property (readonly, nonatomic) int displayOrder;
@property (nonatomic) BOOL hasDisplayOrder;
@property (readonly, nonatomic) NSString *searchTerms;
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
- (id)initWithDiscardReason:(int)a0 placement:(int)a1 bundleID:(id)a2 brandIdentifier:(id)a3 displayOrder:(id)a4 searchTerms:(id)a5;

@end
