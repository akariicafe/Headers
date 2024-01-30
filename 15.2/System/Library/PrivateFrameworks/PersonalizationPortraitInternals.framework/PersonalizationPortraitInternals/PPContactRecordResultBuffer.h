@class NSMutableArray;

@interface PPContactRecordResultBuffer : NSObject

@property (readonly, nonatomic) NSMutableArray *records;
@property (nonatomic) BOOL loadingComplete;

- (void).cxx_destruct;
- (id)init;

@end
