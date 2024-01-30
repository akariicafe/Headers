@class NSString, NSArray, NSSet, FLItemChangeObserver, FLFollowUpController;

@interface FLItemDetailViewModel : NSObject <FLViewModel> {
    NSArray *_originalItems;
    NSSet *_originalItemIdentifiers;
    FLFollowUpController *_controller;
    FLItemChangeObserver *_observer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)allPendingItems;
- (id)initWithIdentifier:(id)a0;
- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (void)setItemChangeHandler:(id /* block */)a0;

@end
