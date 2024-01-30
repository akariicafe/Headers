@class NSArray, DIIdentityDriversLicenseDescriptor, NSString;

@interface PKIdentityDriversLicenseDescriptor : NSObject <PKIdentityDocumentDescriptor>

@property (retain, nonatomic) DIIdentityDriversLicenseDescriptor *wrapped;
@property (readonly, nonatomic) NSArray *elements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addElements:(id)a0 withIntentToStore:(id)a1;
- (id)asDIIdentityDriversLicenseDescriptor;
- (id)initWithDIIdentityDriversLicenseDescriptor:(id)a0;
- (id)intentToStoreForElement:(id)a0;

@end
