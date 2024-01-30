@class NSString, NSData, NSDate, Channel;

@interface GeneratedEncryptionKey : NSManagedObject

@property (class, readonly, nonatomic) NSString *dateGeneratedKeyPath;

@property (copy, nonatomic) NSDate *dateGenerated;
@property (retain, nonatomic) NSData *originalOutgoingRatchetState;
@property (retain, nonatomic) Channel *channel;

+ (id)fetchRequest;

@end
