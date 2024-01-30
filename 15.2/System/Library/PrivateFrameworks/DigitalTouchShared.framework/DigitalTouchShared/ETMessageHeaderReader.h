@interface ETMessageHeaderReader : NSObject

+ (id)identifierInArchive:(id)a0;
+ (unsigned short)messageTypeInArchive:(id)a0;
+ (void)getSendTime:(double *)a0 type:(unsigned short *)a1 inArchive:(id)a2;
+ (double)sendTimeInArchive:(id)a0;

@end
