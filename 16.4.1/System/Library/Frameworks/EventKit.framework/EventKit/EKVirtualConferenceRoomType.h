@class NSString;

@interface EKVirtualConferenceRoomType : NSObject

@property (readonly, nonatomic) NSString *originatingExtensionIdentifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *extensionBundleIdentifier;

+ (void)virtualConferenceRoomTypesWithCompletion:(id /* block */)a0 queue:(id)a1;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 identifier:(id)a1 extensionBundleIdentifier:(id)a2;

@end
