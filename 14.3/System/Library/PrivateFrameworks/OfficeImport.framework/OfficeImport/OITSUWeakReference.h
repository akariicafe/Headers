@interface OITSUWeakReference : NSObject

@property (readonly, nonatomic) id object;

+ (id)weakReferenceWithObject:(id)a0;

- (id)init;
- (id)initWithObject:(id)a0;
- (void)dealloc;

@end
