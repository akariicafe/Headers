@interface ATXScoreInterpreterFromAssetBuilder : NSObject

+ (id)scoreInterpreterForConsumerSubType:(unsigned char)a0;
+ (id)scoreInterpretersForAllSubTypes;
+ (id)assetFilenameForSubType:(unsigned char)a0;
+ (id)interpreterFromAssetFilename:(id)a0;

@end
