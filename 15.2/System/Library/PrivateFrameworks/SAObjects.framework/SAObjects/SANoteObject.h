@class NSString, NSDate;

@interface SANoteObject : SADomainObject

@property (copy, nonatomic) NSString *contents;
@property (copy, nonatomic) NSDate *createdDate;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (nonatomic) BOOL restricted;
@property (copy, nonatomic) NSString *title;

+ (id)object;
+ (id)objectWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
