@class NSString, NSArray;

@interface BMFrontBoardDisplayLayoutDisplay : BMEventBase <BMStoreData>

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSString *hardwareIdentifier;
@property (readonly, nonatomic) int interfaceOrientation;
@property (readonly, nonatomic) int backlightStatus;
@property (readonly, nonatomic) NSArray *elements;
@property (readonly, nonatomic) NSArray *transitionReasons;
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
- (id)initWithType:(int)a0 name:(id)a1 deviceName:(id)a2 hardwareIdentifier:(id)a3 interfaceOrientation:(int)a4 backlightStatus:(int)a5 elements:(id)a6 transitionReasons:(id)a7;
- (void).cxx_destruct;

@end
