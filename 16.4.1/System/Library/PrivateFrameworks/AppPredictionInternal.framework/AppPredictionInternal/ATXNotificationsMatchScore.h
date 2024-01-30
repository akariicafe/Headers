@class NSMutableArray;

@interface ATXNotificationsMatchScore : NSObject {
    NSMutableArray *_values;
}

- (void)combine:(id)a0;
- (void)set:(unsigned long long)a0 value:(id)a1;
- (id /* block */)getAggregationBlockForName:(unsigned long long)a0;
- (id)dict;
- (id)init;
- (id)get:(unsigned long long)a0;
- (void).cxx_destruct;

@end
