@class NSString;

@interface YelpAccessPlugin : NSObject <ACDAccountAccessPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsAccountTypeWithIdentifier:(id)a0;

@end
