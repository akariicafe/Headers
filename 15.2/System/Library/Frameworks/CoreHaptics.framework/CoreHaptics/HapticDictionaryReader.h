@interface HapticDictionaryReader : NSObject {
    unsigned long long _urlIndex;
}

- (id)parseParamCurve:(id)a0;
- (id)parseParam:(id)a0;
- (id)parseEvent:(id)a0;
- (id)parseEventParams:(id)a0;
- (id)parseParamCurveControlPoints:(id)a0;
- (id)readPatternID:(id)a0 error:(id *)a1;
- (id)readAndVerifyVersion:(id)a0 error:(id *)a1;
- (id)parseConfiguration:(id)a0 error:(id *)a1;
- (id)scanForEmbeddedResources:(id)a0;
- (BOOL)parseEventsAndParameters:(id)a0 reply:(id /* block */)a1;

@end
