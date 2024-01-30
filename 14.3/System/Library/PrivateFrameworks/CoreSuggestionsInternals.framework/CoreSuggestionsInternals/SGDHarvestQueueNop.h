@interface SGDHarvestQueueNop : SGDHarvestQueueOnDisk

- (void)popBySourceKey:(id)a0 messageId:(id)a1 callback:(id /* block */)a2;
- (void)close;
- (void)pop:(id /* block */)a0;
- (void)addItemWithSourceKey:(id)a0 messageId:(id)a1 highPriority:(BOOL)a2 customPriorityCriteria:(unsigned char)a3 item:(id)a4 callback:(id /* block */)a5;
- (void)countHighPriorityItems:(unsigned long long *)a0 lowPriorityItems:(unsigned long long *)a1;
- (void)popByItemId:(long long)a0 callback:(id /* block */)a1;
- (unsigned long long)count;

@end
