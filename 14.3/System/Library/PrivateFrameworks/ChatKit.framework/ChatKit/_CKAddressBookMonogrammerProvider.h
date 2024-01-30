@class NSString;

@interface _CKAddressBookMonogrammerProvider : NSObject <CKAddressBookMonogrammerProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)monogrammerForStyle:(long long)a0 diameter:(double)a1;

@end
