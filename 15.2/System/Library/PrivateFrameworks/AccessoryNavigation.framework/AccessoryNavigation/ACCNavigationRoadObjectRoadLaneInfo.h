@class NSMutableDictionary;

@interface ACCNavigationRoadObjectRoadLaneInfo : NSObject

@property (retain) NSMutableDictionary *infoDict;

+ (id)keyForType:(unsigned short)a0;

- (id)copyDictionary;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (BOOL)setInfo:(unsigned short)a0 data:(id)a1;
- (BOOL)_checkDataClassForType:(unsigned short)a0 data:(id)a1;
- (id)copyInfo:(unsigned short)a0;
- (void)setInfoFromDictionary:(id)a0;

@end
