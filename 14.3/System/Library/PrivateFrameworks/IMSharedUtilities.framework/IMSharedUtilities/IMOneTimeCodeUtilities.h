@interface IMOneTimeCodeUtilities : NSObject

- (BOOL)isValidOneTimeCode:(id)a0;
- (id)createOTCFromMessageBody:(id)a0 sender:(id)a1 guid:(id)a2;

@end
