@class NSString, NSObject;
@protocol OS_os_log;

@interface CKLogFacilityWrapper : NSObject

@property (readonly, nonatomic) NSObject<OS_os_log> *facility;
@property (readonly, nonatomic) NSString *facilityName;

- (void).cxx_destruct;
- (id)initWithFacility:(id)a0 facilityName:(id)a1;

@end
