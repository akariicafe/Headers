@class NSString, NSDate;

@interface HMDCameraAccessModeChangedBulletin : NSObject

@property (readonly, copy) NSString *title;
@property (readonly, copy) NSString *body;
@property (readonly, copy) NSString *threadIdentifier;
@property (readonly, copy) NSDate *dateOfOccurrence;

+ (id)bulletinForAccessMode:(unsigned long long)a0 camera:(id)a1 home:(id)a2 changeReason:(unsigned long long)a3 changeDate:(id)a4;
+ (id)localizedMessageForCameraAccessModeChange:(unsigned long long)a0 changeReason:(unsigned long long)a1 camera:(id)a2;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 body:(id)a1 threadIdentifier:(id)a2 dateOfOccurrence:(id)a3;

@end
