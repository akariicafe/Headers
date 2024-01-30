@interface PVCanceler : NSObject

@property (nonatomic) BOOL canceled;
@property (copy, nonatomic) id /* block */ updateBlock;

+ (id)cancelerWithUpdateBlock:(id /* block */)a0;

- (void).cxx_destruct;

@end
