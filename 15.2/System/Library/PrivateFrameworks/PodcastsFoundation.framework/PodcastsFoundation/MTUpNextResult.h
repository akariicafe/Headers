@class NSString;

@interface MTUpNextResult : NSObject

@property (copy, nonatomic) NSString *episodeUuid;
@property (nonatomic) double modifiedDate;
@property (nonatomic) BOOL needsUpdate;

- (void).cxx_destruct;
- (void)updateFor:(id)a0;

@end
