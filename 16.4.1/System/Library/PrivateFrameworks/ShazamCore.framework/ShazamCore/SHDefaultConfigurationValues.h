@class NSDictionary, NSString;

@interface SHDefaultConfigurationValues : NSObject

@property (readonly, nonatomic) NSDictionary *defaultValues;
@property (readonly, nonatomic) double recordingIntermission;
@property (readonly, copy, nonatomic) NSString *campaignGroup;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;

@end
