@class NSString, NSData, MRSendCommandHandlerDialog, NSError, _MRSendCommandResultStatusProtobuf;

@interface MRSendCommandResultStatus : NSObject <NSCopying>

@property (readonly, copy, nonatomic) _MRSendCommandResultStatusProtobuf *protobuf;
@property (readonly, nonatomic) unsigned int statusCode;
@property (readonly, nonatomic) long long statusType;
@property (readonly, nonatomic) MRSendCommandHandlerDialog *dialog;
@property (readonly, copy, nonatomic) NSError *commandError;
@property (readonly, copy, nonatomic) NSData *customData;
@property (readonly, copy, nonatomic) NSString *customDataType;

+ (id)successStatus;
+ (id)statusWithCode:(unsigned int)a0;
+ (id)statusWithCode:(unsigned int)a0 error:(id)a1;
+ (id)statusWithCode:(unsigned int)a0 dialog:(id)a1;
+ (id)statusWithCode:(unsigned int)a0 customData:(id)a1 type:(id)a2;

- (id)initWithStatusType:(long long)a0 statusCode:(unsigned int)a1 dialog:(id)a2 customData:(id)a3 customDataType:(id)a4 error:(id)a5;
- (id)initWithProtobuf:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
