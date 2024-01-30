@class NSString, NSSet;

@interface ATXIntentMetadataCacheKey : NSObject

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *intentClassName;
@property (readonly, nonatomic) NSSet *nonNilParameters;
@property (readonly, nonatomic) unsigned long long intentHash;
@property (readonly, nonatomic) NSString *localeIdentifier;

- (id)initWithIntent:(id)a0 includingParameters:(BOOL)a1 includingParameterValues:(BOOL)a2 localeIdentifier:(id)a3;
- (void).cxx_destruct;
- (id)initWithIntent:(id)a0 includingParameterValues:(BOOL)a1 localeIdentifier:(id)a2;
- (id)stringRepresentationForSerialization;
- (id)initWithIntent:(id)a0 includingParameters:(BOOL)a1;

@end
