@class NSString;

@interface CAMCTMCancelMomentCaptureCommand : CAMCaptureCommand

@property (readonly, nonatomic) NSString *_persistenceUUID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPersistenceUUID:(id)a0;

@end
