@interface _IMSPIConnectionController : NSObject

+ (id)sharedController;

- (void)setChatCap;
- (void)setChatCapWithAttachments;
- (void)clearChatCap;

@end
