@class NSString, NSDictionary, PHAsset, NSDate;

@interface PXMockDisplaySingleAssetSuggestion : NSObject <PXDisplaySuggestion>

@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, nonatomic) unsigned short state;
@property (readonly, nonatomic) unsigned short type;
@property (readonly, nonatomic) unsigned short subtype;
@property (readonly, copy, nonatomic) NSString *localIdentifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSDictionary *actionProperties;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fetchKeyAssets;
- (id)initWithAsset:(id)a0 type:(unsigned short)a1 subtype:(unsigned short)a2 title:(id)a3;

@end
