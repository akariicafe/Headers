@class NSArray, NSMutableDictionary, NSString;

@interface DIIdentityDriversLicenseDescriptor : NSObject <DIIdentityDocumentDescriptor>

@property (readonly, retain) NSMutableDictionary *elementsToIntentToStore;
@property (readonly) NSArray *elements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
