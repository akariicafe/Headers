@class NSString;

@interface SAMPAddMediaEntityToWishList : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *adamId;

+ (id)addMediaEntityToWishList;
+ (id)addMediaEntityToWishListWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
