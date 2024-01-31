@interface DSP_ADM : NSObject

@property (nonatomic) void *admLibrary;

- (id)init;
- (void)dealloc;
- (id)createFactory;

@end
