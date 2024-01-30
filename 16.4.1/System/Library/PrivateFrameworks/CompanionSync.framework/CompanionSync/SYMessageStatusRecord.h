@class NSString;

@interface SYMessageStatusRecord : NSObject

@property (copy, nonatomic) NSString *messageID;
@property (nonatomic) BOOL deviceACKReceived;
@property (nonatomic) BOOL applicationACKReceived;
@property (nonatomic) BOOL responseReceived;
@property (readonly, nonatomic) BOOL isComplete;

- (id)debugDescription;
- (id)initWithMessageID:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initFiller;

@end
