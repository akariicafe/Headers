@class NSMutableDictionary;

@interface ACCNavigationRoadObjectRoadObjectInfo : NSObject

@property (retain) NSMutableDictionary *infoDict;

+ (id)keyForType:(unsigned short)a0;

- (id)copyDictionary;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)setInfo:(unsigned short)a0 data:(id)a1;
- (BOOL)_checkDataClassForType:(unsigned short)a0 data:(id)a1;
- (id)copyInfo:(unsigned short)a0;
- (void)setInfoFromDictionary:(id)a0;

@end
