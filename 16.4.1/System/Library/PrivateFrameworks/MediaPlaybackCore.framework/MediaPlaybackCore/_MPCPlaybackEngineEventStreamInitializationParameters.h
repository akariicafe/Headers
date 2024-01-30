@class NSString;

@interface _MPCPlaybackEngineEventStreamInitializationParameters : NSObject <MPCPlaybackEngineEventStreamInitializationParameters>

@property (readonly, copy, nonatomic) NSString *originID;
@property (readonly, copy, nonatomic) NSString *playerID;
@property (readonly, copy, nonatomic) NSString *engineID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPlaybackEngineParameters:(id)a0 engineID:(id)a1;

@end
