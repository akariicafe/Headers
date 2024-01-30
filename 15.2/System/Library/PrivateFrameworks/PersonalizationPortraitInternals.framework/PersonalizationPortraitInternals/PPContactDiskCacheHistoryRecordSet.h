@class NSString, NSMutableArray;

@interface PPContactDiskCacheHistoryRecordSet : NSObject

@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSMutableArray *adds;
@property (readonly, nonatomic) NSMutableArray *updates;
@property (readonly, nonatomic) NSMutableArray *deletes;

- (void).cxx_destruct;
- (unsigned long long)hash;

@end
