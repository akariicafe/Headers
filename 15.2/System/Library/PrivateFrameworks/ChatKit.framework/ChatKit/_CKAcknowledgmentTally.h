@class NSArray;

@interface _CKAcknowledgmentTally : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSArray *senders;
@property (copy, nonatomic) NSArray *contacts;

- (id)initWithType:(long long)a0 senders:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
