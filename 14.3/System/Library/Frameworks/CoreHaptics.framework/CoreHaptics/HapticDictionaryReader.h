@interface HapticDictionaryReader : NSObject {
    unsigned long long _urlIndex;
}

- (id)parseParam:(id)a0;
- (id)parseParamCurve:(id)a0;
- (id)parseEvent:(id)a0;
- (id)parseEventParams:(id)a0;
- (id)parseParamCurveControlPoints:(id)a0;
- (BOOL)verifyVersion:(id)a0;
- (id)scanForEmbeddedURLs:(id)a0;
- (BOOL)parseEventsAndParameters:(id)a0 reply:(id /* block */)a1;

@end
