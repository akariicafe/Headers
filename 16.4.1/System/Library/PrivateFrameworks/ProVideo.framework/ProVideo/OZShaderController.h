@class NSString, NSRegularExpression, NSURL, NSMutableArray;
@protocol MTLLibrary, MTLDevice;

@interface OZShaderController : NSObject

@property (retain, nonatomic) NSString *shader;
@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) NSRegularExpression *paramRegex;
@property (retain, nonatomic) NSRegularExpression *functionRegex;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) id<MTLLibrary> library;
@property (readonly, nonatomic) NSMutableArray *parameters;
@property (readonly, nonatomic) NSString *vertexFunctionName;
@property (readonly, nonatomic) NSString *fragmentFunctionName;

- (id)initWithURL:(id)a0;
- (id)process:(id)a0;
- (void)dealloc;
- (id)functionNameFromLine:(id)a0;
- (void)initRegex;
- (void)loadShaderWithURL:(id)a0;
- (id)preprocess:(id)a0;

@end
