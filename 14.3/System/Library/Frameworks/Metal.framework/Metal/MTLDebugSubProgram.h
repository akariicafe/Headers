@class NSString, MTLDebugInstrumentationData;

@interface MTLDebugSubProgram : NSObject {
    MTLDebugInstrumentationData *_data;
    struct DebugSubProgram { unsigned int x0; unsigned int x1; unsigned int x2; } *_debugSubProgram;
}

@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int line;

- (oneway void)release;
- (id)retain;
- (oneway void)releaseInternal;

@end
