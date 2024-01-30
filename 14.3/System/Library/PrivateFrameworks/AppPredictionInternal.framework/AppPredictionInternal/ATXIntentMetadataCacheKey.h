@class NSString, NSSet;

@interface ATXIntentMetadataCacheKey : NSObject

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *intentClassName;
@property (readonly, nonatomic) NSSet *nonNilParameters;

- (void).cxx_destruct;
- (id)initWithIntent:(id)a0 includingParameters:(BOOL)a1;
- (id)stringRepresentationForSerialization;

@end
