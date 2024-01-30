@class NSPredicate, NSString;

@interface GCGenericDeviceElementModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int typeOverride;
@property (nonatomic) long long calibrationMin;
@property (nonatomic) long long calibrationMax;

- (id)build;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)initializeWithModel:(id)a0;

@end
