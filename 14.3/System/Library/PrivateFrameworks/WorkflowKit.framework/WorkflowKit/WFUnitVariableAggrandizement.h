@class NSString, NSUnit;

@interface WFUnitVariableAggrandizement : WFVariableAggrandizement

@property (readonly, nonatomic) NSString *unitType;
@property (readonly, nonatomic) NSUnit *unit;

- (void).cxx_destruct;
- (id)processedContentClasses:(id)a0;
- (void)applyToContentCollection:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithUnit:(id)a0 unitType:(id)a1;
- (id)availableUnits;

@end
