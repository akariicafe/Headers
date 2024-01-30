@class NSUUID, PHFetchResult, NSString;

@interface PUAssetPickerSectionData : NSObject

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) unsigned long long layoutType;
@property (readonly, nonatomic) long long priority;
@property (readonly, nonatomic) PHFetchResult *fetchResult;
@property (readonly, nonatomic) unsigned long long cellType;
@property (readonly, nonatomic) NSString *localizedTitle;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 layoutType:(unsigned long long)a1 priority:(long long)a2 fetchResult:(id)a3 cellType:(unsigned long long)a4 localizedTitle:(id)a5;
- (id)initWithIdentifier:(id)a0 layoutType:(unsigned long long)a1 fetchResult:(id)a2 cellType:(unsigned long long)a3 localizedTitle:(id)a4;
- (id)description;

@end
