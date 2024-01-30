@class NSString;

@interface TCMPSInstanceNormalizationDescriptor : NSObject

@property (nonatomic) unsigned long long channels;
@property (nonatomic) unsigned long long styles;
@property (copy, nonatomic) NSString *label;

- (void).cxx_destruct;
- (id)init;

@end
