@class HDCodableRoutineRequestMessage;

@interface HDRemoteRoutineRequestContext : NSObject

@property (retain, nonatomic) HDCodableRoutineRequestMessage *request;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
