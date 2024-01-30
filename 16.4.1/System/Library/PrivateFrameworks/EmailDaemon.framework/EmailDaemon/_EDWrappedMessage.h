@class EMMessage;

@interface _EDWrappedMessage : NSObject

@property (readonly, nonatomic) EMMessage *message;
@property (readonly, nonatomic) long long databaseID;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 databaseID:(long long)a1;

@end
