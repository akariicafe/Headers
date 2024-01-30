@class NSString;

@interface BPSTTRMetadata : NSObject

@property (retain, nonatomic) NSString *componentName;
@property (retain, nonatomic) NSString *componentVersion;
@property (nonatomic) long long componentID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *radarDescription;

- (id)queryItems;
- (id)_parameters;
- (void).cxx_destruct;
- (id)init;
- (id)initWithComponent:(unsigned long long)a0;
- (void)_setComponentValuesFromComponent:(unsigned long long)a0;
- (id)initWithComponentName:(id)a0 componentVersion:(id)a1 componentID:(long long)a2;

@end
