@class NSString, HMAccessoryAccessCode;

@interface HMAccessCodeRemoveRequest : NSObject <HMAccessCodeModificationRequest>

@property (readonly) HMAccessoryAccessCode *accessoryAccessCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createAccessCodeRemoveRequestValue;
- (id)initWithAccessoryAccessCode:(id)a0;

@end
