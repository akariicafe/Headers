@class NSString;

@interface AVTAvatarPuppetRecord : NSObject <AVTAvatarRecordInternal>

@property (readonly, copy, nonatomic) NSString *puppetName;
@property (readonly, nonatomic, getter=isPuppet) BOOL puppet;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isEditable) BOOL editable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)matchingIdentifierTest:(id)a0;

@end
