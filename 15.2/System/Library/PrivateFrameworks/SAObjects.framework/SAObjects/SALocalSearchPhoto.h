@class NSURL, NSString, SAUIAppPunchOut;

@interface SALocalSearchPhoto : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *fullsize;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSURL *largeSize;
@property (copy, nonatomic) NSURL *maximumSize;
@property (retain, nonatomic) SAUIAppPunchOut *photoPunchOut;
@property (copy, nonatomic) NSURL *thumbnail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)photo;
+ (id)photoWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
