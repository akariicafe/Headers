@class KNMacUILayout;

@interface KNMacArchivedUILayout : TSPObject

@property (readonly, nonatomic) KNMacUILayout *uiLayout;

- (void).cxx_destruct;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)initWithUILayout:(id)a0 context:(id)a1;

@end
