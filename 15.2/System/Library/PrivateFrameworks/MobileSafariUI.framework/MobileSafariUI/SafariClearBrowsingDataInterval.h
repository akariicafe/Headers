@class NSString;

@interface SafariClearBrowsingDataInterval : NSObject

@property (retain, nonatomic) NSString *aggdIntervalKey;
@property (nonatomic) long long clearBrowsingDataInterval;
@property (readonly) NSString *descriptionOfInterval;
@property (copy, nonatomic) id /* block */ dateAfterWhichDataShouldBeClearedBlock;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDescription:(id)a0 dateAfterWhichDataShouldBeClearedBlock:(id /* block */)a1;

@end
