@interface IDSSocketPairResourceTransferMessage : IDSSocketPairDataMessage

+ (id)resumeMessageWithSequenceNumber:(unsigned int)a0 streamID:(unsigned short)a1 messageUUID:(id)a2 nextByteOffset:(unsigned long long)a3;
+ (id)cancelMessageWithSequenceNumber:(unsigned int)a0 streamID:(unsigned short)a1 messageUUID:(id)a2 cancelReason:(unsigned char)a3;

- (unsigned char)command;
- (unsigned char)type;
- (unsigned long long)byteOffset;
- (unsigned char)cancelReason;

@end
