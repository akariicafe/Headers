@interface SALoggingUtilities : NSObject

+ (id)computeMessagesForEvent:(id)a0;
+ (id)extractUniqueIdentifierFromMessage:(id)a0;
+ (id)stringToSplit:(id)a0 maxSplitSize:(unsigned long long)a1;
+ (void)logTAEvent:(id)a0;
+ (id)extractEventFromMessages:(id)a0;

@end
