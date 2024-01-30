@class NSString, NSMutableSet;

@interface _MXExtensionContainingAppProxy : NSObject

@property (readonly, copy, nonatomic) NSString *containingAppIdentifer;
@property (retain, nonatomic) NSMutableSet *extensionNonUIIdentifiers;
@property (retain, nonatomic) NSMutableSet *extensionUIIdentifiers;

- (void).cxx_destruct;
- (id)initWithContainingAppIdentifer:(id)a0;

@end
