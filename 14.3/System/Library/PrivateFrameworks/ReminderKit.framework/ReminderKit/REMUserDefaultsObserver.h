@class NSString, REMUserDefaults;

@interface REMUserDefaultsObserver : NSObject <REMUserDefaultsObserveToken>

@property (retain, nonatomic) REMUserDefaults *userDefaults;
@property (copy, nonatomic) NSString *userDefaultsKey;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) BOOL removed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
