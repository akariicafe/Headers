@class NSArray, WLKContinueWatchingCollection;

@interface WLKContinueWatchingResponse : NSObject

@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) WLKContinueWatchingCollection *featured;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
