@class NSNumber, NSData;

@interface MRIDSMessage : NSObject

@property (readonly, copy, nonatomic) NSNumber *messageID;
@property (readonly, copy, nonatomic) NSData *data;

- (id)initWithID:(id)a0 data:(id)a1;
- (BOOL)replyWithData:(id)a0 priority:(long long)a1;
- (void).cxx_destruct;

@end
