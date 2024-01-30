@interface DEDialogStateUseCase : DEDialogState

- (double)lastTimestamp;
- (int)usageCount;
- (id)groundingUsage:(id)a0;
- (BOOL)hasAllRandomId:(id)a0;
- (id)allGroundings;
- (id)allRandomIds;
- (id)lastRandomIds;

@end
