@class NSArray;

@interface SACallTree : NSObject

@property (readonly) NSArray *rootObjects;
@property (readonly) NSArray *rootFrames;

- (void).cxx_destruct;
- (void)enumerateCallTreeFrames:(id /* block */)a0;
- (id)initWithRootObjects:(id)a0;

@end
