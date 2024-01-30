@interface HapticDictionaryWriter : NSObject {
    unsigned long long _urlIndex;
}

- (id)eventToDictionary:(id)a0 embeddedURLs:(id)a1;
- (id)paramToDictionary:(id)a0;
- (id)paramCurveToDictionary:(id)a0;
- (id)eventParamsToArray:(id)a0;
- (id)paramCurveControlPointsToArray:(id)a0;
- (id)patternToDictionary:(id)a0 events:(id)a1 parameters:(id)a2 parameterCurves:(id)a3 embeddedURLs:(id)a4;

@end
