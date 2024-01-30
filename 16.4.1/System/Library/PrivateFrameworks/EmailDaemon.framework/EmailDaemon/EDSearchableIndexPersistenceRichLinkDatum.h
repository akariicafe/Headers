@class NSString;

@interface EDSearchableIndexPersistenceRichLinkDatum : NSObject

@property (copy, nonatomic) NSString *richLinkItemIdentifier;
@property (copy, nonatomic) NSString *messagePersistentID;
@property (copy, nonatomic) NSString *richLinkID;
@property (nonatomic) long long mailboxID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *url;

- (void).cxx_destruct;

@end
