@class MTLDebugInstrumentationData, MTLDebugSubProgram;

@interface MTLDebugLocation : NSObject {
    MTLDebugInstrumentationData *_data;
    struct DebugLocation { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } *_debugLoc;
}

@property (readonly, nonatomic) MTLDebugSubProgram *scope;
@property (readonly, nonatomic) unsigned int line;
@property (readonly, nonatomic) unsigned int column;
@property (readonly, nonatomic) MTLDebugLocation *inlinedAt;

- (id)retain;
- (id)description;
- (id)formattedDescription:(unsigned long long)a0;
- (void)dealloc;
- (oneway void)release;
- (oneway void)releaseInternal;

@end
