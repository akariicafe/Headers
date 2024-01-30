@class NSUUID, NSString, NSDate;

@interface MapsSyncFakeHistoryItem : MapsSyncFakeBaseItem <MapsSyncHistoryItem>

@property (nonatomic) BOOL test_isDeleted;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSDate *createTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deleteWithCompletion:(id /* block */)a0;

@end
