@class NSNumber, NSURL, NSString;

@interface SAReminderListObjectWrapper : SAReminderListObject <SASyncWrap>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *generation;
@property (copy, nonatomic) NSURL *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)listObjectWrapper;
+ (id)listObjectWrapperWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
