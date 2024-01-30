@class NSString;

@interface _MPCPlayerFeedbackCommand : _MPCPlayerItemCommand <MPCPlayerFeedbackCommand>

@property (readonly, nonatomic) unsigned int command;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedShortTitle;
@property (nonatomic) long long presentationStyle;
@property (nonatomic) BOOL value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)changeValue:(BOOL)a0;
- (id)initWithResponse:(id)a0 mediaRemoteCommand:(unsigned int)a1;

@end
