@class NSError;

@interface SiriCoreErrorInfo : NSObject

@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL isPeerConnectionError;
@property (nonatomic) BOOL isPeerNotNearbyError;

- (void).cxx_destruct;

@end
