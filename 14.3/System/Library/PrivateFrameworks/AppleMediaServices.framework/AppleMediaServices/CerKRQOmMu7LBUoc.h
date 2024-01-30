@class NSString, NSMutableDictionary, wumZ2SSA5KbWdu7E, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface CerKRQOmMu7LBUoc : NSObject {
    BOOL _callbackDone;
    BOOL _prepared;
    NSMutableDictionary *_identifier2UUID;
}

@property (retain, nonatomic) wumZ2SSA5KbWdu7E *context;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callback_queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *score_id_queue;
@property (retain, nonatomic) NSString *lastScoreIdentifier;
@property (retain, nonatomic) NSError *prepareError;

+ (id)scorerWithContext:(id)a0;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)prepareScoreMessage;
- (void)scoreWithScoreRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)settingsFromContext:(id)a0;
- (void)_safeCallbackWithMessage:(id)a0 uuid:(id)a1 error:(id)a2;
- (id)VkBISyFszEu5z9lr:(id)a0 error:(id *)a1;

@end
