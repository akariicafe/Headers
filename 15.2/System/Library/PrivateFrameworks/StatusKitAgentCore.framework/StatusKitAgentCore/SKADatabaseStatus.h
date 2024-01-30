@class NSString, NSData, NSDate;

@interface SKADatabaseStatus : NSObject

@property (readonly, copy, nonatomic) NSString *channelIdentifier;
@property (readonly, copy, nonatomic) NSDate *dateCreated;
@property (readonly, copy, nonatomic) NSDate *datePublished;
@property (readonly, copy, nonatomic) NSDate *dateReceived;
@property (readonly, copy, nonatomic) NSDate *dateExpired;
@property (readonly, nonatomic) NSData *rawData;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) BOOL isExpired;

- (id)description;
- (void).cxx_destruct;
- (id)initWithChannelIdentifier:(id)a0 dateCreated:(id)a1 datePublished:(id)a2 dateReceived:(id)a3 dateExpired:(id)a4 rawData:(id)a5 uniqueIdentifier:(id)a6;
- (id)initWithCoreDataStatus:(id)a0;

@end
