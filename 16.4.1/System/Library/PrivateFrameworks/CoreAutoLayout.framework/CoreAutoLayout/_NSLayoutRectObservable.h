@class NSArray, NSLayoutRect;
@protocol NSLayoutItem;

@interface _NSLayoutRectObservable : NSObservationSource {
    NSArray *_anchorObservations;
    NSLayoutRect *_rectangle;
    id<NSLayoutItem> _layoutItem;
}

+ (id)observableForRect:(id)a0 inItem:(id)a1;

- (void)dealloc;

@end
