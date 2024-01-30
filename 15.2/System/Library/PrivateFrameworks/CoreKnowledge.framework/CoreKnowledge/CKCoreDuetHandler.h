@interface CKCoreDuetHandler : NSObject

+ (void)duetEventsWithIdentifier:(id)a0 inStreamNamed:(id)a1 startDate:(id)a2 endDate:(id)a3 limit:(unsigned long long)a4 completionHandler:(id /* block */)a5;
+ (void)saveEvents:(id)a0 toStreamNamed:(id)a1 completionHandler:(id /* block */)a2;
+ (void)removeAllFromStreamNamed:(id)a0 completionHandler:(id /* block */)a1;

@end
