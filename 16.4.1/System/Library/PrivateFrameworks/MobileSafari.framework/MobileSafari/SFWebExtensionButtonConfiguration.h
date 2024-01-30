@class NSArray;

@interface SFWebExtensionButtonConfiguration : NSObject

@property (readonly, nonatomic) unsigned long long activeExtensionCount;
@property (readonly, nonatomic) BOOL alwaysShowMultipleExtensionsButton;
@property (readonly, nonatomic) NSArray *buttons;

- (BOOL)isEqual:(id)a0;
- (id)initWithActiveExtensionCount:(unsigned long long)a0 alwaysShowMultipleExtensionsButton:(BOOL)a1 buttons:(id)a2;
- (void).cxx_destruct;

@end
