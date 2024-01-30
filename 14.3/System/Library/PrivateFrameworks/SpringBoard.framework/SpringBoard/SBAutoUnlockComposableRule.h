@class NSString, NSMutableSet;

@interface SBAutoUnlockComposableRule : NSObject <SBAutoUnlockRule> {
    NSMutableSet *_rules;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldAutoUnlockForSource:(int)a0;
- (void)addAutoUnlockRule:(id)a0;
- (void)removeAutoUnlockRule:(id)a0;

@end
