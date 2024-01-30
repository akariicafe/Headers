@protocol TUCallHistoryManagerDataSource;

@interface TUCallHistoryManager : NSObject

@property (readonly, nonatomic) id<TUCallHistoryManagerDataSource> dataSource;

- (id)initWithDataSource:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateOutgoingLocalParticipantUUID:(id)a0 forCallsWithOutgoingLocalParticipantUUID:(id)a1;
- (void)updateOutgoingLocalParticipantUUID:(id)a0 forCallsWithLocalParticipantUUID:(id)a1;

@end
