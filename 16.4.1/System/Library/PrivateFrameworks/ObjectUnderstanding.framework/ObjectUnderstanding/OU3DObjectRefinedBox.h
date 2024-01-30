@class NSArray;

@interface OU3DObjectRefinedBox : NSObject

@property (retain) NSArray *preRefinedBox;
@property (retain) NSArray *refinedBox;
@property BOOL isOutlier;
@property int frameIndex;

- (id)init;
- (void).cxx_destruct;

@end
