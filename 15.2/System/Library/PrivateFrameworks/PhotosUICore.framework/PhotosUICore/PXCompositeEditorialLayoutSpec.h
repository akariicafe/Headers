@class NSArray, NSMapTable;

@interface PXCompositeEditorialLayoutSpec : NSObject

@property (class, readonly) PXCompositeEditorialLayoutSpec *defaultSpec;

@property (readonly, nonatomic) NSMapTable *preferredNextTemplatesByCurrentTemplate;
@property (readonly, nonatomic) NSArray *templates;
@property (readonly, nonatomic) long long minNumberOfRects;
@property (readonly, nonatomic) long long maxNumberOfRects;
@property (readonly, nonatomic) long long minNumberOfColumns;

- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (void)prepareBuiltinSpec;
- (id)preferredNextTemplatesForTemplate:(id)a0;

@end
