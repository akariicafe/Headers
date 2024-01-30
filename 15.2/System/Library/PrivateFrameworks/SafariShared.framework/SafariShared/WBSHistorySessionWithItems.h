@class NSArray;

@interface WBSHistorySessionWithItems : WBSHistorySession

@property (readonly, copy, nonatomic) NSArray *items;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSessionStartDate:(id)a0;
- (id)initWithSessionStartDate:(id)a0 items:(id)a1;

@end
