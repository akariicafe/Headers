@class NSString, MSDStoreInfo;

@interface MSDMapAnnotation : NSObject <MKAnnotation>

@property (readonly, nonatomic) MSDStoreInfo *storeInfo;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isSameLocation:(id)a0;
- (id)initWithStoreInfo:(id)a0;

@end
