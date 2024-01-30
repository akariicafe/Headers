@class NSString;

@interface TCMPSInstanceNormalizationDescriptor : NSObject

@property (nonatomic) unsigned long long channels;
@property (nonatomic) unsigned long long styles;
@property (copy, nonatomic) NSString *label;

- (id)init;
- (void).cxx_destruct;

@end
