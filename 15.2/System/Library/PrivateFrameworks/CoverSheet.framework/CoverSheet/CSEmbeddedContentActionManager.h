@class NSString, NSMutableSet;
@protocol CSEmbeddedContentActionManagerDelegate, SBFActionProviding;

@interface CSEmbeddedContentActionManager : NSObject <SBFActionHandling> {
    id<SBFActionProviding> _contentActionProvider;
}

@property (weak, nonatomic) id<CSEmbeddedContentActionManagerDelegate> delegate;
@property (retain, nonatomic) NSMutableSet *activeActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)setContentActionProvider:(id)a0;
- (void)_removeAction:(id)a0;
- (void).cxx_destruct;
- (BOOL)_addAction:(id)a0;
- (BOOL)handleAction:(id)a0 forProvider:(id)a1;
- (id)validActionWithIdentifierIfExists:(id)a0;
- (BOOL)handlesActionWithClass:(Class)a0;

@end
