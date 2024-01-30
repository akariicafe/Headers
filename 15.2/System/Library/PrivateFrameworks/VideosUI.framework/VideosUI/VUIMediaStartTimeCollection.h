@class NSArray, NSMutableArray, VUIMediaStartTimeInfo;

@interface VUIMediaStartTimeCollection : NSObject

@property (retain, nonatomic) NSMutableArray *startTimeInfos;
@property (readonly, nonatomic) VUIMediaStartTimeInfo *preferredStartTimeInfo;
@property (readonly, nonatomic) NSArray *allStartTimeInfos;

+ (void)initialize;

- (void).cxx_destruct;
- (void)addStartTimeInfo:(id)a0;
- (void)removeAllStartTimeInfos;

@end
