@class NSDate, ECAngleBracketIDHash;

@interface EDReadLaterCloudStorageChangeElement : NSObject

@property (readonly, nonatomic) ECAngleBracketIDHash *messageID;
@property (readonly, nonatomic) NSDate *readLaterDate;
@property (readonly, nonatomic) NSDate *displayDate;

- (void).cxx_destruct;
- (id)initWithMessageID:(id)a0 readLaterDate:(id)a1 displayDate:(id)a2;

@end
