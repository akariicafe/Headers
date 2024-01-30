@protocol TUCallHistoryManagerDataSource;

@interface TUCallHistoryManager : NSObject

@property (readonly, nonatomic) id<TUCallHistoryManagerDataSource> dataSource;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)updateOutgoingLocalParticipantUUID:(id)a0 forCallsWithOutgoingLocalParticipantUUID:(id)a1;
- (void)updateOutgoingLocalParticipantUUID:(id)a0 forCallsWithLocalParticipantUUID:(id)a1;

@end
