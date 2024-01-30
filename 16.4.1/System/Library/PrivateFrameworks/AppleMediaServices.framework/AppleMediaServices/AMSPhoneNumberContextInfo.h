@class NSString, NSUUID;

@interface AMSPhoneNumberContextInfo : NSObject

@property (readonly) BOOL isVoicePreferred;
@property (readonly) NSString *phoneNumber;
@property (readonly) NSString *simLabel;
@property (readonly) NSUUID *uuid;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPhoneNumber:(id)a0 simLabel:(id)a1 uuid:(id)a2 isVoicePreferred:(BOOL)a3;

@end
