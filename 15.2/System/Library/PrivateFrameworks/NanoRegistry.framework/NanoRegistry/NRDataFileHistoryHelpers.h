@interface NRDataFileHistoryHelpers : NSObject

+ (id)unarchiveSecureProperties;
+ (BOOL)archiveSecureProperties:(id)a0;
+ (BOOL)archiveDeviceHistory:(id)a0;
+ (id)unarchiveDeviceHistory;
+ (BOOL)createMissingDates:(id)a0;

@end
