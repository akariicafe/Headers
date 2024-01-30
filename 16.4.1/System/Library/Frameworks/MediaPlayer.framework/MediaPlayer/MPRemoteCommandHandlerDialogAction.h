@class NSString, MRSendCommandHandlerDialogAction, MPRemoteCommandEvent;

@interface MPRemoteCommandHandlerDialogAction : NSObject <NSCopying>

@property (readonly, copy, nonatomic) MRSendCommandHandlerDialogAction *mediaRemoteType;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) MPRemoteCommandEvent *event;
@property (readonly, nonatomic) long long type;

+ (id)actionWithTitle:(id)a0 type:(long long)a1 commandEvent:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithMediaRemoteType:(id)a0;

@end
