@class NSArray;
@protocol _UIFocusFastScrollingIndexBarEntryTrimmerDelegate;

@interface _UIFocusFastScrollingIndexBarEntryTrimmer : NSObject

@property (copy, nonatomic) NSArray *allEntries;
@property (weak, nonatomic) id<_UIFocusFastScrollingIndexBarEntryTrimmerDelegate> delegate;

- (void).cxx_destruct;
- (id)_trimEntries:(id)a0 toFitCount:(long long)a1;
- (id)entriesTrimmedToFitCount:(unsigned long long)a0;

@end
