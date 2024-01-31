@class NSString, NSMutableArray;

@interface AVEventManager : NSObject <AVEventPublishing> {
    id _owner;
    NSMutableArray *_actionStorage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAction:(SEL)a0 withTarget:(id)a1 forEvent:(id)a2;
- (void)addAction:(id /* block */)a0 forEvent:(id)a1;
- (void).cxx_destruct;
- (id)initWithOwner:(id)a0;
- (void)addAction:(SEL)a0 withTarget:(id)a1 forEvent:(id)a2;
- (void)_addActionIfPossible:(id)a0;
- (void)_ensureActionStorage;
- (void)sendActionsForEvent:(id)a0;

@end
