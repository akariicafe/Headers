@class NSSet;

@interface TUContactsDataProviderAppleCareHandles : NSObject

@property (readonly, copy, nonatomic) NSSet *appleCareHandles;

- (id)init;
- (void).cxx_destruct;
- (void)loadHandles;
- (BOOL)contains:(id)a0;

@end
