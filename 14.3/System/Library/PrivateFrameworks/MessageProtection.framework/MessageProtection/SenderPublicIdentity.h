@class RegisteredPreKey, NSString, NSData, NSDate;

@interface SenderPublicIdentity : NSManagedObject

@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *destinationHash;
@property (retain, nonatomic) NSData *skippedCounters;
@property (nonatomic) int upperBufferIndex;
@property (retain, nonatomic) RegisteredPreKey *messagedKey;

+ (id)fetchRequest;

@end
