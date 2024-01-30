@class NSString, TUCallCenter;

@interface _CNUIUserActionDialRequestOpener : NSObject <CNUIUserActionDialRequestOpener>

@property (readonly, nonatomic) TUCallCenter *callCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)errorForUnableToCastDialRequest:(id)a0;
+ (id)errorForUnableToOpenDialRequest:(id)a0 withUnderlyingError:(id)a1;

@end
