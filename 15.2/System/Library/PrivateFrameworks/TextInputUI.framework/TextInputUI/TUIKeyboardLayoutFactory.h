@class NSMutableDictionary, TUIKBGraphSerialization;

@interface TUIKeyboardLayoutFactory : NSObject

@property (readonly, nonatomic) void *layoutsLibraryHandle;
@property (retain) NSMutableDictionary *internalCache;
@property (retain) TUIKBGraphSerialization *decoder;

+ (id)sharedKeyboardFactory;
+ (id)layoutsFileName;

- (void)_createDecoderIfNecessary;
- (id)keyboardPrefixForWidth:(double)a0 andEdge:(BOOL)a1;
- (id)init;
- (void)dealloc;
- (id)keyboardWithName:(id)a0 inCache:(id)a1;

@end
