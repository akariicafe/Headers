@class NSSet;

@interface TUContactsDataProviderAppleCareHandles : NSObject

@property (readonly, copy, nonatomic) NSSet *appleCareHandles;

- (void).cxx_destruct;
- (id)init;
- (BOOL)contains:(id)a0;
- (void)loadHandles;

@end
