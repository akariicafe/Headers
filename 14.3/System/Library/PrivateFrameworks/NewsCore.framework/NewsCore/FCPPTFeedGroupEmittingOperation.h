@class NSString;

@interface FCPPTFeedGroupEmittingOperation : FCFeedGroupEmittingOperation

@property (retain, nonatomic) NSString *channelID;

- (void).cxx_destruct;
- (id)initWithChannelID:(id)a0 context:(id)a1 fromCursor:(id)a2 toCursor:(id)a3 groupEmitterIdentifier:(id)a4;
- (void)performOperation;

@end
