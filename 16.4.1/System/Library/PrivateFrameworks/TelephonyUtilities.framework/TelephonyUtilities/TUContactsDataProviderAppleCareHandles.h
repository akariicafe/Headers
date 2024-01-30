@class NSSet;

@interface TUContactsDataProviderAppleCareHandles : NSObject

@property (readonly, copy, nonatomic) NSSet *appleCareHandles;

- (BOOL)contains:(id)a0;
- (void)loadHandles;
- (id)init;
- (void).cxx_destruct;

@end
