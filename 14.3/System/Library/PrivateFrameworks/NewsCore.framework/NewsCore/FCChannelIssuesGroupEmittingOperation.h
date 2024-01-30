@class NSString;

@interface FCChannelIssuesGroupEmittingOperation : FCFeedGroupEmittingOperation

@property (retain, nonatomic) NSString *channelIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (id)initWithContext:(id)a0 fromCursor:(id)a1 toCursor:(id)a2 groupEmitterIdentifier:(id)a3 channelIdentifier:(id)a4;

@end
