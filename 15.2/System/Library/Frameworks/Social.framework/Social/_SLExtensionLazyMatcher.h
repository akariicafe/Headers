@class NSString, NSExtension;

@interface _SLExtensionLazyMatcher : NSObject {
    NSString *_identifier;
    NSExtension *_extension;
}

@property (readonly, nonatomic) NSExtension *extension;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;

@end
