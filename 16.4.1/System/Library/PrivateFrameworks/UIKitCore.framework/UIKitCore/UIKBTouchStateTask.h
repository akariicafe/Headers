@class UIKBTouchState;

@interface UIKBTouchStateTask : NSObject <NSCopying>

@property (readonly, nonatomic) UIKBTouchState *touchState;
@property (readonly, copy, nonatomic) id /* block */ task;
@property (nonatomic) BOOL isBusy;

+ (id)touchStateTaskForTouchState:(id)a0 andTask:(id /* block */)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithTouchState:(id)a0 andTask:(id /* block */)a1;

@end
