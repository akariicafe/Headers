@class NSString, BSObjCProtocol;

@interface BSServiceInterface : NSObject <NSCopying, NSMutableCopying, BSDescriptionProviding> {
    NSString *_identifier;
    BSObjCProtocol *_server;
    BSObjCProtocol *_client;
    struct __CFBoolean { } *_clientWaitsForActivation;
}

@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long clientMessagingExpectation;
@property (readonly, copy, nonatomic) BSObjCProtocol *server;
@property (readonly, copy, nonatomic) BSObjCProtocol *client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interfaceWithServer:(id)a0 client:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;

@end
