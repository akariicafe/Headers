@class NSString;
@protocol CSItemDestination;

@interface CSAdjunctListActionManager : NSObject <SBFActionHandling>

@property (retain, nonatomic) id<CSItemDestination> itemDestination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithItemDestination:(id)a0;
- (BOOL)_handleLockScreenContentAction:(id)a0;
- (void).cxx_destruct;
- (BOOL)_actionIsInRelevantSlot:(id)a0;
- (BOOL)handleAction:(id)a0 forProvider:(id)a1;
- (BOOL)handlesActionWithClass:(Class)a0;

@end
