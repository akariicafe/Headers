@class NSString, NSSet, NSData, NSDate, NSNumber;

@interface SFNetworkAttachment : NSManagedObject

@property (copy, nonatomic) NSNumber *attrs;
@property (copy, nonatomic) NSDate *firstTimeStamp;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isHotSpot;
@property (nonatomic) BOOL isKnownGood;
@property (nonatomic) BOOL isKnownSporadic;
@property (nonatomic) BOOL isLowInternetDL;
@property (nonatomic) BOOL isLowInternetUL;
@property (copy, nonatomic) NSNumber *kind;
@property (retain, nonatomic) NSData *netSignature;
@property (copy, nonatomic) NSNumber *overallStayMean;
@property (copy, nonatomic) NSNumber *overallStayVar;
@property (copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSDate *timeStamp;
@property (copy, nonatomic) NSNumber *velo;
@property (nonatomic) BOOL wasLastFailed;
@property (retain, nonatomic) NSSet *hasDefaultRoute;
@property (retain, nonatomic) NSSet *supportsFlows;

+ (id)entityName;
+ (id)fetchRequest;

@end
