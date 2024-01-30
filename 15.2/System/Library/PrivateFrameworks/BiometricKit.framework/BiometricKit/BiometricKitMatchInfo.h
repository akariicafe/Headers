@class NSArray, NSDictionary;

@interface BiometricKitMatchInfo : NSObject

@property (retain, nonatomic) NSArray *topology;
@property (retain, nonatomic) NSDictionary *details;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
