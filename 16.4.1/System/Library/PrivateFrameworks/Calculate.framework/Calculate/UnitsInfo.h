@class NSMutableDictionary, NSArray, UnitInfo, UnitTypeInfo, NSMutableArray;

@interface UnitsInfo : NSObject

@property (retain, nonatomic) NSMutableDictionary *unitNameToInfo;
@property (retain, nonatomic) NSMutableArray *unitIDToInfo;
@property (retain, nonatomic) NSMutableDictionary *unitTypeNameToInfo;
@property (retain, nonatomic) NSMutableArray *unitTypeToInfo;
@property (weak, nonatomic) UnitTypeInfo *angleInfo;
@property (weak, nonatomic) UnitInfo *degreesInfo;
@property (weak, nonatomic) UnitInfo *radiansInfo;
@property (readonly, nonatomic) NSArray *unitNames;
@property (readonly, nonatomic) int unitCount;
@property (readonly, nonatomic) int unitTypeCount;

+ (BOOL)shouldSkipUnitName:(id)a0;
+ (id)unitsInfoWithDictionary:(id)a0;

- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)infoForAngle;
- (id)infoForDegrees;
- (id)infoForRadians;
- (id)infoForUnitID:(int)a0;
- (id)infoForUnitName:(id)a0;
- (id)infoForUnitType:(int)a0;
- (id)infoForUnitTypeName:(id)a0;
- (void)populateSubunitIDs:(id)a0 forUnit:(id)a1 visited:(id)a2;

@end
