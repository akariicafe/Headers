@class NSString;
@protocol CSItemDestination;

@interface CSAdjunctListActionManager : NSObject <SBFActionHandling>

@property (retain, nonatomic) id<CSItemDestination> itemDestination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)handlesActionWithClass:(Class)a0;
- (id)initWithItemDestination:(id)a0;
- (BOOL)handleAction:(id)a0 forProvider:(id)a1;
- (void).cxx_destruct;
- (BOOL)_handleLockScreenContentAction:(id)a0;
- (BOOL)_actionIsInRelevantSlot:(id)a0;

@end
