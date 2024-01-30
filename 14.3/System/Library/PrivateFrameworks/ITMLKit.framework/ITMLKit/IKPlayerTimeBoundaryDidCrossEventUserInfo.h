@class NSDictionary, NSString;

@interface IKPlayerTimeBoundaryDidCrossEventUserInfo : NSObject <IKPlayerEventMarshaling>

@property (readonly, nonatomic) double boundary;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBoundary:(double)a0;

@end
