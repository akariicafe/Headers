@protocol MTLBuffer;

@interface MPSPredicate : NSObject

@property (readonly, retain, nonatomic) id<MTLBuffer> predicateBuffer;
@property (readonly, nonatomic) unsigned long long predicateOffset;

+ (id)predicateWithBuffer:(id)a0 offset:(unsigned long long)a1;

- (id)initWithDevice:(id)a0;
- (id)debugQuickLookObject;
- (id)debugDescription;
- (void)dealloc;
- (id)init;
- (id)initWithBuffer:(id)a0 offset:(unsigned long long)a1;

@end
