@class NSString, NSUUID, NSDate, NSNumber;

@interface BLTRemoteRequestLogItem : NSObject

@property (copy, nonatomic) NSString *idsTransmitIdentifier;
@property (copy, nonatomic) NSString *idsResponseIdentifier;
@property (copy, nonatomic) id requestDescription;
@property (retain, nonatomic) NSDate *cacheDate;
@property (retain, nonatomic) NSNumber *sequenceNumber;
@property (retain, nonatomic) NSUUID *sessionIdentifier;
@property (nonatomic) unsigned long long sessionState;

+ (id)remoteRequestLogItemWithIDSTransmitIdentifier:(id)a0 IDSResponseIdentifier:(id)a1 requestDescription:(id)a2 sequenceNumber:(id)a3 sessionIdentifier:(id)a4 sessionState:(unsigned long long)a5;

- (void).cxx_destruct;
- (id)description;

@end
