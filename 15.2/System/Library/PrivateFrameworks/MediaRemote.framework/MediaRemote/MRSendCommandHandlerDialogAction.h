@class _MRSendCommandResultHandlerDialogActionProtobuf, NSString, MRSendCommandHandlerEvent;

@interface MRSendCommandHandlerDialogAction : NSObject <NSCopying>

@property (readonly, copy, nonatomic) _MRSendCommandResultHandlerDialogActionProtobuf *protobuf;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) MRSendCommandHandlerEvent *event;
@property (readonly, nonatomic) long long type;

+ (id)actionWithTitle:(id)a0 type:(long long)a1 commandEvent:(id)a2;

- (id)initWithProtobuf:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitle:(id)a0 type:(long long)a1 commandEvent:(id)a2;

@end
