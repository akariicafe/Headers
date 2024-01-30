@interface MSSendEmail : MSMailDefaultService

+ (id)sendMessageData:(id)a0 autosaveIdentifier:(id)a1 isHMEMessage:(BOOL)a2 sendLaterDate:(id)a3 completionBlock:(id /* block */)a4;
+ (id)sendEmail:(id)a0 playSound:(BOOL)a1 completionBlock:(id /* block */)a2;
+ (id)sendEmail:(id)a0 playSound:(BOOL)a1 timeout:(double)a2 error:(id *)a3;

- (void)_sendEmail:(id)a0 playSound:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)_sendMessageData:(id)a0 autosaveIdentifier:(id)a1 isHMEMessage:(BOOL)a2 sendLaterDate:(id)a3 completionBlock:(id /* block */)a4;
- (void)_simulateServicesMethod:(id)a0 arguments:(id)a1 callback:(id /* block */)a2;

@end
