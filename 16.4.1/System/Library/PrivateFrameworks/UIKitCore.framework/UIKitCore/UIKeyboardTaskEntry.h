@class NSArray;

@interface UIKeyboardTaskEntry : NSObject <NSCopying> {
    id /* block */ __task;
}

@property (readonly, retain, nonatomic) NSArray *originatingStack;

- (id)initWithTask:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)execute:(id)a0;
- (void).cxx_destruct;

@end
