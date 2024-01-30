@class NSString, RMModelDeclarationBase, NSArray;

@interface RMUIKeyValueViewModel : NSObject

@property short symbol;
@property (retain) NSString *title;
@property (retain) RMModelDeclarationBase *declaration;
@property (retain) NSArray *detailViewModels;

- (id)init;
- (void).cxx_destruct;
- (void)clearModel;

@end
