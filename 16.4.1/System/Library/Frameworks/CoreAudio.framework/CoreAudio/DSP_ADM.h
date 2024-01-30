@interface DSP_ADM : NSObject

@property (nonatomic) void *admLibrary;

- (void)dealloc;
- (id)init;
- (id)createFactory;

@end
