@class NSString, NSArray, MPRemoteCommandHandlerDialog;

@interface MPCPlayerCommandDialog : NSObject {
    MPRemoteCommandHandlerDialog *_dialog;
}

@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *localizedMessage;
@property (readonly, nonatomic) NSArray *actions;

- (id)description;
- (void).cxx_destruct;
- (id)initWithMPDialog:(id)a0 request:(id)a1;

@end
