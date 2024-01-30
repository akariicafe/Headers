@class NSArray, NSString, NSNumber, NSMutableArray;

@interface CHHapticPattern : NSObject <CHHapticPlayable> {
    NSNumber *_version;
    NSMutableArray *_embeddedURLs;
    NSMutableArray *_events;
    NSMutableArray *_parameters;
    NSMutableArray *_parameterCurves;
}

@property (readonly, nonatomic) double duration;
@property (readonly) NSArray *events;
@property (readonly) NSArray *parameters;
@property (readonly) NSArray *parameterCurves;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)addHapticsForWheelsOfTime:(id)a0;
+ (id)eventListFromEvents:(id)a0 parameters:(id)a1 parameterCurves:(id)a2 engine:(id)a3 privileged:(BOOL)a4;

- (id)init;
- (void).cxx_destruct;
- (id)initWithEvents:(id)a0 parameterCurves:(id)a1 error:(id *)a2;
- (id)initWithEvents:(id)a0 parameters:(id)a1 error:(id *)a2;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)resolveExternalResources:(id)a0 error:(id *)a1;
- (id)exportDictionaryAndReturnError:(id *)a0;
- (id)eventListFromDictionary:(id)a0 error:(id *)a1;

@end
