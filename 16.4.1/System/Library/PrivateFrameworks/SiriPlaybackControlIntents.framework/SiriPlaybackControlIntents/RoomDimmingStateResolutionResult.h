@interface RoomDimmingStateResolutionResult : INEnumResolutionResult

+ (id)confirmationRequiredWithRoomDimmingStateToConfirm:(long long)a0;
+ (id)successWithResolvedRoomDimmingState:(long long)a0;

- (id)initWithJSONDictionary:(id)a0 forIntent:(id)a1;

@end
