@class BSSMO, NSDate;

@interface ScanMO : NSManagedObject

@property (copy, nonatomic) NSDate *date;
@property (nonatomic) short originRssi;
@property (nonatomic) short resultRssi;
@property (retain, nonatomic) BSSMO *origin;
@property (retain, nonatomic) BSSMO *result;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)generateInstance:(id)a0;
+ (BOOL)getSsidAndBssidWithinRangeForColocatedScopeTransition:(id)a0 bssid:(id)a1 minRssi:(int)a2 maxRssi:(int)a3 band:(unsigned int)a4 transitionSsid:(id *)a5 transitionBssid:(id *)a6 transitionRssi:(int *)a7 authFlags:(id *)a8 moc:(id)a9;

@end
