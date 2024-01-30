@class NSValue;

@interface SUScrollRequest : NSObject

@property (nonatomic, getter=isAnimated) BOOL animated;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain) NSValue *contentOffsetValue;
@property (retain) NSValue *frameValue;

- (void)dealloc;

@end
