@class NSString;

@interface SYMessageStatusRecord : NSObject

@property (copy, nonatomic) NSString *messageID;
@property (nonatomic) BOOL deviceACKReceived;
@property (nonatomic) BOOL applicationACKReceived;
@property (nonatomic) BOOL responseReceived;
@property (readonly, nonatomic) BOOL isComplete;

- (void).cxx_destruct;
- (id)initWithMessageID:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)initFiller;

@end
