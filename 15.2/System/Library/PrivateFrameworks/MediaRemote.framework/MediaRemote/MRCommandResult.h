@class NSArray, NSString, MRPlayerPath, NSError;

@interface MRCommandResult : NSObject

@property (copy, nonatomic) NSArray *resultStatuses;
@property (nonatomic) unsigned int sendError;
@property (copy, nonatomic) NSError *error;
@property (retain, nonatomic) NSString *sendErrorDescription;
@property (readonly, copy, nonatomic) NSArray *handlerReturnStatuses;
@property (readonly, copy, nonatomic) MRPlayerPath *playerPath;

+ (id)commandResultWithSendError:(unsigned int)a0;

- (id)protobuf;
- (id)initWithHandlerStatuses:(id)a0 sendError:(unsigned int)a1;
- (id)initWithResultStatuses:(id)a0 sendError:(unsigned int)a1 playerPath:(id)a2;
- (id)initWithProtobuf:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (id)copyWithPlayerPath:(id)a0;
- (void).cxx_destruct;
- (id)initWithWithSendError:(unsigned int)a0 description:(id)a1;
- (id)data;

@end
