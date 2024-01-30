@class NSMutableArray;

@interface ATXNotificationsMatchScore : NSObject {
    NSMutableArray *_values;
}

- (void)set:(unsigned long long)a0 value:(id)a1;
- (void)combine:(id)a0;
- (id)get:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)dict;
- (id /* block */)getAggregationBlockForName:(unsigned long long)a0;

@end
