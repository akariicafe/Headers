@class NSString, NSMutableDictionary;

@interface SXPostActionHandlerManager : NSObject <SXPostActionHandlerManager>

@property (readonly, nonatomic) NSMutableDictionary *postActionHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addPostActionHandler:(id)a0 forActionType:(id)a1;
- (void)handledAction:(id)a0 state:(unsigned long long)a1;
- (void)removePostActionHandler:(id)a0 forActionType:(id)a1;

@end
