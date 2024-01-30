@class NSArray, NSString, NSMutableArray;
@protocol SGSuggestionDelegate;

@interface SGSuggestionStore : SGList <SGListDelegate> {
    NSMutableArray *_suggestions;
    long long _notificationsLockCount;
    BOOL _modified;
}

@property (copy, nonatomic) NSArray *suggestions;
@property (weak, nonatomic) id<SGSuggestionDelegate> suggestionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)removeSuggestion:(id)a0;
- (void)addSuggestion:(id)a0;
- (void)list:(id)a0 didAddItem:(id)a1 atIndex:(unsigned long long)a2;
- (void)list:(id)a0 didRemoveItem:(id)a1 atIndex:(unsigned long long)a2;
- (id)sectionWithItem:(id)a0;
- (void)updateSuggestion:(id)a0;
- (void)lockNotifications;
- (void)unlockNotifications;

@end
