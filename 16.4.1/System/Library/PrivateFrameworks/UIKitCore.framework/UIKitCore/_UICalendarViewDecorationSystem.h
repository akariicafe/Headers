@class NSMutableDictionary;

@interface _UICalendarViewDecorationSystem : NSObject

@property (retain, nonatomic) NSMutableDictionary *decorationViewFeed;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)_prepareDecorationFeedForKey:(id)a0;
- (void)configureDecoration:(id)a0;
- (void)invalidateDecoration:(id)a0;

@end
