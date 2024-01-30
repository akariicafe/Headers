@class NSString;

@interface SAGenericCommand : SABaseCommand

@property (readonly, nonatomic) NSString *className;
@property (readonly, nonatomic) NSString *group;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
