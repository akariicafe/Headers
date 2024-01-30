@class NSArray, NSIndexSet;

@interface SKUISettingsDescriptionUpdate : NSObject

@property (retain, nonatomic) NSArray *indexPaths;
@property (retain, nonatomic) NSIndexSet *indexSet;
@property (readonly, nonatomic) long long updateType;

- (void).cxx_destruct;
- (id)initWithUpdateType:(long long)a0;

@end
