@class NSMutableDictionary, HFPinCode;

@interface HFPinCodeDataStore : NSObject

@property (retain, nonatomic) NSMutableDictionary *userPINCodes;
@property (retain, nonatomic) NSMutableDictionary *removedUserPINCodes;
@property (retain, nonatomic) NSMutableDictionary *guestPINCodes;
@property (retain, nonatomic) HFPinCode *currentUserPinCode;

- (id)init;
- (void).cxx_destruct;
- (id)pinCodeForCodeValue:(id)a0;
- (void)mergeData:(id)a0;
- (id)guestPinCodeFromItem:(id)a0;
- (id)pinCodeFromItem:(id)a0;
- (void)updateWithPinCode:(id)a0 forOldCodeValue:(id)a1;

@end
