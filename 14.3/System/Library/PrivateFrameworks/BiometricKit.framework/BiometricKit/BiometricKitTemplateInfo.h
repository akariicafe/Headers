@class NSArray, NSDictionary;

@interface BiometricKitTemplateInfo : NSObject

@property (retain, nonatomic) NSArray *topology;
@property (retain, nonatomic) NSDictionary *details;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
