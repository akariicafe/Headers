@class NSString, NSURL;

@interface SAVCSContentShelfUpdateInfo : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long pageNumber;
@property (copy, nonatomic) NSString *targetShelfViewId;
@property (copy, nonatomic) NSString *targetViewId;
@property (copy, nonatomic) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentShelfUpdateInfo;
+ (id)contentShelfUpdateInfoWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
