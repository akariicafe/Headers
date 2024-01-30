@class NSArray, NSDictionary;

@interface BiometricKitMatchInfo : NSObject

@property (retain, nonatomic) NSArray *topology;
@property (retain, nonatomic) NSDictionary *details;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
