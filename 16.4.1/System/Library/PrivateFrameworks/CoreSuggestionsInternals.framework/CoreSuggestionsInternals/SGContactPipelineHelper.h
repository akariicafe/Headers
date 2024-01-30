@class NSDictionary, NSString;

@interface SGContactPipelineHelper : NSObject {
    NSDictionary *_lengthsCounts;
    unsigned long long _phonesSeenInContacts;
    NSString *_mostCommonCountryCode;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _helperLock;
}

+ (id)sharedInstance;
+ (id)findContactsForDetailType:(unsigned long long)a0 andValue:(id)a1;
+ (id)findContactsForPerson:(id)a0 fetchingKeys:(id)a1;
+ (id)normalizedDigits:(id)a0;
+ (BOOL)personExistsInContacts:(id)a0 name:(id)a1 handle:(id)a2;

- (BOOL)numberMatchesContactsForm:(id)a0;
- (void)dealloc;
- (BOOL)numberMatchesContactsForm:(id)a0 amongContactsWithIdentifiers:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
