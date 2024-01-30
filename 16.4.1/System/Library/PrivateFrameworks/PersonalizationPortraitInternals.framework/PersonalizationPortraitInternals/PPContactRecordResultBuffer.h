@class NSMutableArray;

@interface PPContactRecordResultBuffer : NSObject

@property (readonly, nonatomic) NSMutableArray *records;
@property (nonatomic) BOOL loadingComplete;

- (id)init;
- (void).cxx_destruct;

@end
