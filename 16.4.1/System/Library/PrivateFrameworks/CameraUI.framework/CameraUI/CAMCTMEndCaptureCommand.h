@class NSString;

@interface CAMCTMEndCaptureCommand : CAMCaptureCommand

@property (readonly, nonatomic) NSString *_persistenceUUID;

- (void)executeWithContext:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithPersistenceUUID:(id)a0;

@end
