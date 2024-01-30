@class NSString;

@interface EDAddMessagesSearchableMessageColumnUpgradeStep : NSObject <EDTableUpgradeStep>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)runWithConnection:(id)a0;


@end
