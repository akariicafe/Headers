@interface BPSAppleIDDevices : NSObject

+ (BOOL)isNetworkError:(id)a0;
+ (void)fetchFamilyMemberForAltDSID:(id)a0 username:(id)a1 withCompletion:(id /* block */)a2;
+ (void)fetchFamilyMemberForDevice:(id)a0 withCompletion:(id /* block */)a1;

@end
