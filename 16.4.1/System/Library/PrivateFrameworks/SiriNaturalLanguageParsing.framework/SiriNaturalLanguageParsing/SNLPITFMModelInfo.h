@class NSString;

@interface SNLPITFMModelInfo : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) int loggingComponent;
@property (readonly, nonatomic) NSString *errorDomain;
@property (readonly, nonatomic) NSString *loggingComponentString;

+ (id)stringForModelType:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 loggingComponent:(int)a1 errorDomain:(id)a2;

@end
