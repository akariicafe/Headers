@class NSString, TSTLayoutHint;

@interface TSTArchivedLayoutHint : TSPObject <TSDArchivedHint>

@property (retain, nonatomic) TSTLayoutHint *hint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
