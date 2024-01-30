@interface SACalendarSource : SASource

@property (nonatomic) BOOL strict;

+ (id)source;
+ (id)sourceWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
