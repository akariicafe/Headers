@class NSString, HMHomeManager, CNContactStore;

@interface _CDHomeManagerUtilities : NSObject <HMHomeManagerDelegate> {
    HMHomeManager *_homeManager;
    CNContactStore *_contactStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
