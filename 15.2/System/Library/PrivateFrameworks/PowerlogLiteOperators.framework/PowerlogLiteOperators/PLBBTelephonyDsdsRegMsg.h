@class NSString;

@interface PLBBTelephonyDsdsRegMsg : NSObject

@property int dataIndicator;
@property int dataAttached;
@property int dataActive;
@property (retain) NSString *operatorName;
@property int isHome;
@property (retain) NSString *status;
@property int serviceOpt;

- (void).cxx_destruct;
- (id)init;

@end
