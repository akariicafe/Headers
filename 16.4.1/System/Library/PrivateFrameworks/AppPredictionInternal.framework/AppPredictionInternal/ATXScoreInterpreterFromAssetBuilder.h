@interface ATXScoreInterpreterFromAssetBuilder : NSObject

+ (id)scoreInterpreterForConsumerSubType:(unsigned char)a0;
+ (id)assetFilenameForSubType:(unsigned char)a0;
+ (id)scoreInterpretersForAllSubTypes;
+ (id)interpreterFromAssetFilename:(id)a0;

@end
