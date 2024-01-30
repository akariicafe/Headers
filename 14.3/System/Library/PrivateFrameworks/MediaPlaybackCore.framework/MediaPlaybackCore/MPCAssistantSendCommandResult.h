@class NSArray, NSError, NSNumber;

@interface MPCAssistantSendCommandResult : NSObject

@property (readonly, nonatomic) NSArray *returnStatuses;
@property (readonly, nonatomic) NSError *error;
@property (copy, nonatomic) NSNumber *devicesControlled;

- (void).cxx_destruct;
- (id)initWithReturnStatuses:(id)a0 error:(id)a1;

@end
