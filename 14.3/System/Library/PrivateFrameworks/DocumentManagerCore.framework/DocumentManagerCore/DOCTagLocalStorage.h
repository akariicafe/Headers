@class NSOrderedSet, NSUserDefaults;

@interface DOCTagLocalStorage : NSObject

@property (nonatomic) long long tagSerialNumber;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (retain, nonatomic) NSOrderedSet *userTags;
@property (retain, nonatomic) NSOrderedSet *discoveredTags;

+ (id)sharedAppGroupStorage;

- (id)init;
- (void).cxx_destruct;
- (id)_unarchivedTagsFromData:(id)a0;

@end
