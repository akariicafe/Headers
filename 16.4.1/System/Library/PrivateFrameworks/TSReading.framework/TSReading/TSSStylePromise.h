@class TSSStyle, NSMutableArray;

@interface TSSStylePromise : NSObject <TSSStyleObject> {
    TSSStyle *_sourceStyle;
    NSMutableArray *_promisees;
}

+ (id)promiseForStyle:(id)a0;

- (id)initWithStyle:(id)a0;
- (void)dealloc;
- (void)addPromisee:(id)a0;
- (void)fulfillWithStyle:(id)a0;

@end
