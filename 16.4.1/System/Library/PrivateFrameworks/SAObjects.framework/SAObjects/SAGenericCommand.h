@class NSString;

@interface SAGenericCommand : SABaseCommand

@property (readonly, nonatomic) NSString *className;
@property (readonly, nonatomic) NSString *group;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
