@class NSString, NSArray;

@interface GCGenericDeviceRumbleOutputModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSString *elementIdentifier;
@property (copy, nonatomic) NSArray *fields;

- (id)build;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)initializeWithModel:(id)a0;

@end
