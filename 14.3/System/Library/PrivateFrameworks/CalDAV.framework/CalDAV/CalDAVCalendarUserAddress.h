@class NSURL;

@interface CalDAVCalendarUserAddress : NSObject

@property (retain, nonatomic) NSURL *address;
@property long long preferred;

+ (id)preferredAddress:(id)a0;
+ (id)unpackCalDAVUserAdress:(id)a0;
+ (id)packCalDAVUserAdress:(id)a0;
+ (long long)defaultPreferredAttribute;
+ (id)_minPreferredAddress:(id)a0;
+ (id)_preferredAddressNoPreferred:(id)a0;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)initWithAddress:(id)a0 preferred:(long long)a1;

@end
