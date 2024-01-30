@interface CRUtils : NSObject

+ (id)getInnermostNSError:(id)a0;
+ (int)getInnermostNSErrorCode:(id)a0;

- (BOOL)currentProcessHasEntitlement:(id)a0;
- (id)getAPTicket;
- (id)convertDataToHexInDictionary:(id)a0;
- (BOOL)hasEntitlementBoolForTag:(unsigned int)a0 inAPTicket:(id)a1;
- (id)getPathForApTicketWithError:(id *)a0;
- (BOOL)isHorizonRamdiskBootInApticket:(id)a0;

@end
