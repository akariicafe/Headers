@interface IDSSocketPairResourceTransferMessage : IDSSocketPairDataMessage

+ (id)cancelMessageWithSequenceNumber:(unsigned int)a0 streamID:(unsigned short)a1 messageUUID:(id)a2 cancelReason:(unsigned char)a3;
+ (id)resumeMessageWithSequenceNumber:(unsigned int)a0 streamID:(unsigned short)a1 messageUUID:(id)a2 nextByteOffset:(unsigned long long)a3;

- (unsigned char)command;
- (unsigned long long)byteOffset;
- (unsigned char)type;
- (unsigned char)cancelReason;

@end
