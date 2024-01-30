@class NSArray, NSDictionary, NSString, NSMutableArray;

@interface GEOAvailableExperimentBranch : NSObject {
    NSString *_experimentIdentifier;
    NSMutableArray *_assignments;
}

@property (retain, nonatomic, getter=_clientConfig, setter=_setClientConfig:) NSArray *clientConfig;
@property (readonly, nonatomic, getter=_dictionaryRepresentation) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *clientConfigValues;
@property (readonly, nonatomic, getter=isActive) BOOL active;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLabel:(id)a0 name:(id)a1 experimentIdentifier:(id)a2;
- (void)_addAssignment:(id)a0;
- (id)querySubstringForType:(long long)a0 dispatcherRequestType:(int)a1;

@end
