@class DIVerificationSession, NSString, NSMutableDictionary, NSData, NSError, NSObject, jprL7AuZZkLkFoBK;
@protocol OS_dispatch_queue, OS_os_log;

@interface CdQwUTvJnDEPQgR8 : NSObject {
    BOOL _callbackDone;
    BOOL _prepared;
    NSMutableDictionary *_identifier2UUID;
    NSObject<OS_os_log> *_logger;
}

@property (retain, nonatomic) jprL7AuZZkLkFoBK *context;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callback_queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *score_id_queue;
@property (retain, nonatomic) NSString *lastScoreIdentifier;
@property (retain, nonatomic) NSError *prepareError;
@property (retain, nonatomic) NSData *preparedBlob;
@property (retain, nonatomic) DIVerificationSession *diSession;

+ (id)scorerWithContext:(id)a0;

- (void)_safeCallbackWithMessage:(id)a0 uuid:(id)a1 error:(id)a2;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)VkBISyFszEu5z9lr:(id)a0 error:(id *)a1;
- (id)settingsFromContext:(id)a0;
- (void)scoreWithScoreRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)prepareScoreMessage;
- (void)stop;
- (void)MHcqy8dNQyXvA5JC:(id)a0;

@end
