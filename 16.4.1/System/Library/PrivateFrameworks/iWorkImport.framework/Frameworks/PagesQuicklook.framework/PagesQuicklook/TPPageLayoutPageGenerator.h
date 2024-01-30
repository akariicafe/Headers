@class NSString;

@interface TPPageLayoutPageGenerator : NSObject <TPPageGenerator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createOrUpdatePageHintInSectionHint:(id)a0 withState:(id)a1;
- (BOOL)wantsPageInSectionHint:(id)a0 withState:(id)a1;

@end
