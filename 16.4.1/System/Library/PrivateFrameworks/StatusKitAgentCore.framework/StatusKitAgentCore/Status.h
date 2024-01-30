@class NSString, NSData, NSDate;

@interface Status : NSManagedObject

@property (class, readonly, nonatomic) NSString *channelIdentifierKeyPath;
@property (class, readonly, nonatomic) NSString *datePublishedKeyPath;
@property (class, readonly, nonatomic) NSString *dateCreatedKeyPath;
@property (class, readonly, nonatomic) NSString *uniqueIdentifierKeyPath;

@property (copy, nonatomic) NSString *channelIdentifier;
@property (copy, nonatomic) NSDate *dateCreated;
@property (copy, nonatomic) NSDate *dateExpired;
@property (copy, nonatomic) NSDate *datePublished;
@property (copy, nonatomic) NSDate *dateReceived;
@property (retain, nonatomic) NSData *rawData;
@property (copy, nonatomic) NSString *uniqueIdentifier;

+ (id)fetchRequest;
+ (id)predicateForChannelIdentifier:(id)a0;
+ (id)predicateForStatusUniqueIdentifier:(id)a0;
+ (id)sortDescriptorForDateCreatedAscending:(BOOL)a0;
+ (id)sortDescriptorForDatePublishedAscending:(BOOL)a0;

@end
