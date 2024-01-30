@class NSString;

@interface MUFactoidViewModel : NSObject <MUFactoidViewModel>

@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic) NSString *titleString;
@property (readonly, nonatomic) NSString *valueString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewModelForFactoid:(id)a0;
+ (id)viewModelsFromFactoids:(id)a0;

- (id)buildSymbolWithFont:(id)a0;

@end
