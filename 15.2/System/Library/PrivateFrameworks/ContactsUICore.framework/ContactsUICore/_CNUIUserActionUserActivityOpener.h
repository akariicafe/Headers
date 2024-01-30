@class CNLSApplicationWorkspace, NSString;

@interface _CNUIUserActionUserActivityOpener : NSObject <CNUIUserActionUserActivityOpener>

@property (readonly, nonatomic) CNLSApplicationWorkspace *applicationWorkspace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)errorForUnableToOpenUserActivity:(id)a0 withUnderlyingError:(id)a1;

@end
