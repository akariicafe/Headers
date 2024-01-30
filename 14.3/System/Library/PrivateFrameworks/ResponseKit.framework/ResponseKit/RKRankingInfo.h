@class NSString, NSDate;

@interface RKRankingInfo : NSManagedObject

@property (nonatomic) long long responseId;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *response;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSString *recipientId;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long inputMethod;
@property (retain, nonatomic) NSString *rankedList;
@property (retain, nonatomic) NSDate *timestamp;

@end
