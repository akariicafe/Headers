@interface CTMessageStatus : NSObject

@property (readonly) unsigned int messageId;
@property (readonly) int messageType;
@property (readonly) int result;

- (id)initWithMessageId:(unsigned int)a0 messageType:(int)a1 result:(int)a2;

@end
