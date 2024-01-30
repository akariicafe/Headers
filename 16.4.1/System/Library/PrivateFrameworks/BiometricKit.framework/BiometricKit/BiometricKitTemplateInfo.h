@class NSArray, NSDictionary;

@interface BiometricKitTemplateInfo : NSObject

@property (retain, nonatomic) NSArray *topology;
@property (retain, nonatomic) NSDictionary *details;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
