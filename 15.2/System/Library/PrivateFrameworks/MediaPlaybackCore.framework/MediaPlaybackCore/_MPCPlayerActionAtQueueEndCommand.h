@class NSArray, NSString;

@interface _MPCPlayerActionAtQueueEndCommand : _MPCPlayerCommand <MPCPlayerActionAtQueueEndCommand>

@property (nonatomic) long long actionAtQueueEnd;
@property (retain, nonatomic) NSArray *supportedActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)setQueueEndAction:(long long)a0;

@end
