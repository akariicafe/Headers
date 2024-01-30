@class NSData, NSString;
@protocol DIIdentityDocumentDescriptor;

@interface DIIdentityRequest : NSObject

@property (retain) id<DIIdentityDocumentDescriptor> descriptor;
@property (copy) NSData *nonce;
@property (copy) NSString *merchantIdentifier;
@property (copy) NSString *context;

- (void).cxx_destruct;
- (id)initWithDescriptor:(id)a0 nonce:(id)a1;

@end
