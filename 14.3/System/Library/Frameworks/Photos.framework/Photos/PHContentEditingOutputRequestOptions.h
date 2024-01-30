@interface PHContentEditingOutputRequestOptions : NSObject

@property (nonatomic, getter=isAsyncAdjustment) BOOL asyncAdjustment;
@property (nonatomic, getter=isOnlyChangingOriginalChoice) BOOL onlyChangingOriginalChoice;
@property (nonatomic) long long playbackStyle;
@property (nonatomic) BOOL preferHEICForRenderedImages;

- (id)description;

@end
