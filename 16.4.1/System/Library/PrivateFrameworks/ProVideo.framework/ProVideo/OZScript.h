@class NSRegularExpression, JSContext, NSURL, NSMutableArray;

@interface OZScript : NSObject

@property (retain, nonatomic) NSRegularExpression *paramRegex;
@property (nonatomic) BOOL alertShown;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) JSContext *context;
@property (readonly, nonatomic) NSMutableArray *parameterDescriptors;

- (id)process:(id)a0;
- (void)dealloc;
- (void)dispatch:(id)a0;
- (id)init;
- (id)objectWithName:(id)a0;
- (void)exportObject:(id)a0 as:(id)a1;
- (void)loadScriptWithURL:(id)a0;
- (id)preprocess:(id)a0;

@end
