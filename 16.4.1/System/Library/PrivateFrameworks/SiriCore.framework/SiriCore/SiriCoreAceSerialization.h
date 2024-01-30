@interface SiriCoreAceSerialization : NSObject

+ (id)aceDataForPing:(unsigned int)a0;
+ (id)aceDataForPong:(unsigned int)a0;
+ (id)_insufficientDataErrorForBytesNeeded:(unsigned long long)a0 available:(unsigned long long)a1;
+ (id)_tryParsingPlistPacketBytes:(const void *)a0 length:(unsigned long long)a1;
+ (id)_tryParsingSpeechPacketBytes:(const void *)a0 length:(unsigned long long)a1;
+ (id)aceDataForNop;
+ (id)aceDataForObject:(id)a0 error:(id *)a1;
+ (id)aceDataForSpeechPacket:(id)a0 error:(id *)a1;
+ (id)aceDataForStreamEnd;
+ (id)aceDataForStreamHeaderWithCompressionType:(unsigned char)a0;
+ (id)dataForNop;
+ (id)dataForObject:(id)a0 error:(id *)a1;
+ (id)dataForPing:(unsigned int)a0;
+ (id)dataForPong:(unsigned int)a0;
+ (id)dataForSpeechPacket:(id)a0 error:(id *)a1;
+ (id)dataForStreamEnd;
+ (id)dataForStreamHeaderWithCompressionType:(unsigned char)a0;
+ (BOOL)tryParsingAceHeaderData:(id)a0 compressionType:(unsigned char *)a1 bytesRead:(unsigned long long *)a2 error:(id *)a3;
+ (BOOL)tryParsingPacketWithBytes:(const void *)a0 length:(unsigned long long)a1 rawPacket:(struct { unsigned char x0; unsigned int x1; } *)a2 object:(id *)a3 bytesRead:(unsigned long long *)a4 error:(id *)a5;

@end
