@class NSData, NSString;

@interface NGMGelatoPresenceSignatureFormatter : NSObject <SignatureFormatter>

@property (retain, nonatomic) NSData *signedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithApplicationData:(id)a0;

@end
