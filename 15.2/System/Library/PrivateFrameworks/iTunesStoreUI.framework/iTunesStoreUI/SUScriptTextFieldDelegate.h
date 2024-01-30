@class NSString, NSHashTable;

@interface SUScriptTextFieldDelegate : NSObject <SUScriptTextFieldDelegate> {
    NSHashTable *_delegates;
}

@property (readonly, nonatomic) long long numberOfDelegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)init;
- (void)forwardInvocation:(id)a0;
- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;

@end
