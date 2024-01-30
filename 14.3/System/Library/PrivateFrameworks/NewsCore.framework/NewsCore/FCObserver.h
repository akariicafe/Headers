@class NSString;

@interface FCObserver : NSObject <FCDisposable>

@property (nonatomic) unsigned long long token;
@property (weak, nonatomic) id keepAliveObject;
@property (copy, nonatomic) id /* block */ observerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithToken:(unsigned long long)a0;
- (void)dispose;
- (void)disposeOn:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
