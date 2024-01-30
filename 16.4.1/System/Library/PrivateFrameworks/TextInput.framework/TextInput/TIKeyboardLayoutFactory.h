@class NSMutableDictionary;

@interface TIKeyboardLayoutFactory : NSObject

@property (readonly, nonatomic) void *layoutsLibraryHandle;
@property (retain) NSMutableDictionary *internalCache;

+ (id)sharedKeyboardFactory;
+ (id)layoutsFileName;

- (id)keyboardWithName:(id)a0 inCache:(id)a1;
- (id)keyboardPrefixForWidth:(double)a0 andEdge:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;

@end
