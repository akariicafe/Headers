@class NSArray;

@interface WBSHistorySessionWithItems : WBSHistorySession

@property (readonly, copy, nonatomic) NSArray *items;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSessionStartDate:(id)a0 items:(id)a1;
- (id)initWithSessionStartDate:(id)a0;

@end
