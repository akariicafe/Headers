@class NSString, NSArray;
@protocol MTLFunction, MTLFunctionLogDebugLocation;

@interface MTLBuiltinTrapLog : NSObject <MTLFunctionLog> {
    id<MTLFunction> _function;
    NSString *_encoderLabel;
    NSString *_functionName;
    NSArray *_stackTrace;
    unsigned int _encoderMethodIdentifier;
}

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *encoderLabel;
@property (readonly, nonatomic) id<MTLFunction> function;
@property (readonly, nonatomic) id<MTLFunctionLogDebugLocation> debugLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFunction:(id)a0 encoderLabel:(id)a1 encoderMethodIdentifier:(unsigned int)a2 functionName:(id)a3 stackTrace:(id)a4;

@end
