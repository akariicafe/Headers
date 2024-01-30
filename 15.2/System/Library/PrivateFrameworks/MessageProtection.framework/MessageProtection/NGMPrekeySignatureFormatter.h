@class NSData, NSString;

@interface NGMPrekeySignatureFormatter : NSObject <SignatureFormatter>

@property (readonly, nonatomic) NSData *prekeyPublic;
@property (readonly, nonatomic) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
