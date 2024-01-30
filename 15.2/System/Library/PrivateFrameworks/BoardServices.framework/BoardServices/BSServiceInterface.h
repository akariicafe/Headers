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

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;

@end
