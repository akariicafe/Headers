@class NSString;

@interface RPSignedInUserProvider : NSObject <RPSignedInUserProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)supportsMultipleUsers;
- (unsigned int)signedInUserID;

@end
