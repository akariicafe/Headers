@class NSArray, NSString;
@protocol MTLTexture, MTLFunction, MTLFunctionLogDebugLocation;

@interface MTLTextureErrorLog : NSObject <MTLFunctionLog>

@property (nonatomic) unsigned long long encoderMethodIdentifier;
@property (readonly, nonatomic) id<MTLTexture> texture;
@property (readonly, nonatomic) NSArray *errorStackTrace;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *encoderLabel;
@property (readonly, nonatomic) id<MTLFunction> function;
@property (readonly, nonatomic) id<MTLFunctionLogDebugLocation> debugLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithType:(unsigned long long)a0 function:(id)a1 encoderLabel:(id)a2 texture:(id)a3 stackTrace:(id)a4;

@end
