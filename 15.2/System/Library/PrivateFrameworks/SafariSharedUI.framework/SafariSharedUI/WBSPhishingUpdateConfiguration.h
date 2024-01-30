@class NSString;

@interface WBSPhishingUpdateConfiguration : NSObject

@property (readonly, nonatomic) NSString *configurationName;
@property (readonly, nonatomic) NSString *configurationVersion;
@property (readonly, nonatomic) double updateInterval;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 error:(id *)a1;

@end
