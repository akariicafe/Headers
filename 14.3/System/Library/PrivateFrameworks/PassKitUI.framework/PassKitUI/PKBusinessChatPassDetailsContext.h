@class NSString, PKPass;

@interface PKBusinessChatPassDetailsContext : NSObject <PKBusinessChatContext> {
    PKPass *_pass;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)requiresAuthorization;
- (void).cxx_destruct;
- (id)businessIdentifier;
- (id)intentParameters;
- (id)groupParameters;
- (id)initWithPass:(id)a0;

@end
