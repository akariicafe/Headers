@interface TMLPointer : NSObject <TMLPointerJSExports>

@property (copy, nonatomic) id /* block */ readBlock;
@property (copy, nonatomic) id /* block */ writeBlock;
@property (nonatomic) id pointee;

+ (id)pointerWithReadBlock:(id /* block */)a0 writeBlock:(id /* block */)a1;

- (void).cxx_destruct;

@end
