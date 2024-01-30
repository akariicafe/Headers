@class NSNumber, NSData;

@interface MRIDSCompanionMessage : NSObject

@property (readonly, copy, nonatomic) NSNumber *messageID;
@property (readonly, copy, nonatomic) NSData *data;

- (void).cxx_destruct;
- (id)initWithID:(id)a0 data:(id)a1;
- (BOOL)replyWithData:(id)a0 priority:(long long)a1;

@end
