@class NSString, PHFetchResult;

@interface PXPeopleDetailSettingsFaceDataSource : NSObject <PXPeopleDetailSettingsDataSource>

@property (retain, nonatomic) PHFetchResult *faces;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long numberOfItems;
@property (readonly, nonatomic) BOOL hasMoreDetails;
@property (readonly, nonatomic) long long action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
