@class NSString;

@interface WLFeaturePayload : NSObject

@property (nonatomic) BOOL enabled;
@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long elapsedTime;
@property (copy, nonatomic) NSString *state;

- (void).cxx_destruct;
- (id)init;

@end
