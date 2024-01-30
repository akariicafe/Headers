@class NSArray, NSString, MTLArgument, MTLDebugInstrumentationData;
@protocol MTLFunction, MTLBuffer, MTLFunctionLogDebugLocation;

@interface MTLBufferErrorLog : NSObject <MTLFunctionLog> {
    MTLDebugInstrumentationData *_debugData;
}

@property (nonatomic) unsigned long long encoderMethodIdentifier;
@property (readonly, nonatomic) unsigned long long addressSpace;
@property (readonly, nonatomic) id<MTLBuffer> buffer;
@property (readonly, nonatomic) unsigned long long offset;
@property (readonly, nonatomic) unsigned long long operation;
@property (readonly, nonatomic) NSArray *errorStackTrace;
@property (readonly, nonatomic) MTLArgument *argument;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *encoderLabel;
@property (readonly, nonatomic) id<MTLFunction> function;
@property (readonly, nonatomic) id<MTLFunctionLogDebugLocation> debugLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithType:(unsigned long long)a0 function:(id)a1 encoderLabel:(id)a2 addressSpace:(unsigned long long)a3 buffer:(id)a4 offset:(unsigned long long)a5 operation:(unsigned long long)a6 stackTrace:(id)a7 argument:(id)a8 debugData:(id)a9;

@end
