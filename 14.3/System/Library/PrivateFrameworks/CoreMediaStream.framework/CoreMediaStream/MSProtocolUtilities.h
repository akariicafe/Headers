@interface MSProtocolUtilities : NSObject

+ (id)appleIDSession;
+ (id)_urlSession;
+ (void)fetchMPSStateWithBaseAvailabilityURL:(id)a0 personID:(id)a1 originalLibrarySize:(id)a2 completionBlock:(id /* block */)a3;
+ (id)Win32SHA1OfUDID:(id)a0;
+ (id)deviceInfoDictForPersonID:(id)a0;
+ (id)retryAfterDateBasedOnRetryAfterHeaderString:(id)a0;
+ (void)applyUserDefaultOverridesToResponse:(id)a0;

@end
