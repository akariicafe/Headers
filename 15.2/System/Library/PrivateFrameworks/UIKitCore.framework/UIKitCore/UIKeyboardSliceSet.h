@class NSString, NSMutableSet, NSMutableDictionary;

@interface UIKeyboardSliceSet : NSObject

@property (readonly) NSMutableSet *slices;
@property (retain) NSString *sliceSetID;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startRect;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endRect;
@property double leftWidth;
@property double rightWidth;
@property double mergePoint;
@property (retain) NSMutableDictionary *controlKeys;

+ (id)sliceSetWithDictionaryRepresenation:(id)a0;

- (id)initWithSliceID:(id)a0;
- (id)description;
- (void)addSlice:(id)a0;
- (void)dealloc;

@end
