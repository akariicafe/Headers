@class NSData, NSArray;

@interface _WKPublicKeyCredentialDescriptor : NSObject

@property (copy, nonatomic) NSData *identifier;
@property (copy, nonatomic) NSArray *transports;

- (id)initWithIdentifier:(id)a0;
- (void)dealloc;

@end
