@class NSString, BSSettings;

@interface SSImageIdentifierUpdate : NSObject <BSXPCCoding, SSLoggable>

@property (copy, nonatomic) NSString *imageIdentifier;
@property (copy, nonatomic) NSString *environmentDescriptionIdentifier;
@property (nonatomic) BOOL success;
@property (readonly, nonatomic) BSSettings *bsSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *loggableDescription;

- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (void).cxx_destruct;

@end
