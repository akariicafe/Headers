@class HMHome, NSMutableSet, HFDemoModeFaceRecognitionDataSource;

@interface HFDemoModeFaceRecognitionItemProvider : HFItemProvider

@property (nonatomic) long long mode;
@property (retain, nonatomic) HFDemoModeFaceRecognitionDataSource *dataSource;
@property (retain, nonatomic) NSMutableSet *personItems;
@property (retain, nonatomic) HMHome *home;

- (void).cxx_destruct;
- (id)init;
- (id)reloadItems;
- (id)items;
- (id)initForMode:(long long)a0 home:(id)a1;

@end
