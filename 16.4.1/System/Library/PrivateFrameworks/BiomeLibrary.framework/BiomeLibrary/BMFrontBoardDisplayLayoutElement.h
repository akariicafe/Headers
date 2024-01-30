@class NSString;

@interface BMFrontBoardDisplayLayoutElement : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) long long layoutRole;
@property (nonatomic) BOOL hasLayoutRole;
@property (readonly, nonatomic) long long level;
@property (nonatomic) BOOL hasLevel;
@property (readonly, nonatomic) BOOL hasKeyboardFocus;
@property (nonatomic) BOOL hasHasKeyboardFocus;
@property (readonly, nonatomic) BOOL isUIApplicationElement;
@property (nonatomic) BOOL hasIsUIApplicationElement;
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
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 type:(int)a2 layoutRole:(id)a3 level:(id)a4 hasKeyboardFocus:(id)a5 isUIApplicationElement:(id)a6;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (id)serialize;
- (void).cxx_destruct;

@end
