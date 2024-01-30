@class NSString;

@interface SACallTreeTruncatedLeafCallstacks : SACallTreeFrame <SAJSONSerialization> {
    NSString *_otherCallTreeDescription;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)callTreeFrameWithFrame:(id)a0 startSampleIndex:(unsigned long long)a1 sampleCount:(unsigned long long)a2 isLeafFrame:(BOOL)a3;

@end
