@class NSArray, NSDictionary;

@interface BiometricKitMatchInfo : NSObject

@property (retain, nonatomic) NSArray *topology;
@property (retain, nonatomic) NSDictionary *details;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
