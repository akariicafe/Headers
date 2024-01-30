@class NSString;

@interface _UIFocusFastScrollingEntryTrimmerDelegate : NSObject <_UIFocusFastScrollingIndexBarEntryTrimmerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_focusFastScrollingIndexBarEntryTrimmer:(id)a0 placeholderEntryBetweenEntryBefore:(id)a1 entryAfter:(id)a2;
- (BOOL)_focusFastScrollingIndexBarEntryTrimmer:(id)a0 startingOrEndingEntryMustBePreserved:(id)a1;
- (BOOL)_focusFastScrollingIndexBarEntryTrimmer:(id)a0 entryIsPlaceholder:(id)a1;

@end
