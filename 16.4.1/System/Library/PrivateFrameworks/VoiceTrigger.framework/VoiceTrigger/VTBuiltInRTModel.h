@class NSDictionary;

@interface VTBuiltInRTModel : NSObject

@property (retain, nonatomic) NSDictionary *builtInRTModelDictionary;

+ (id)sharedInstance;

- (void)dealloc;
- (void).cxx_destruct;

@end
