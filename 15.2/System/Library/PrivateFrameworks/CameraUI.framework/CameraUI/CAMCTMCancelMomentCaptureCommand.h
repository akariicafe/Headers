@class NSString;

@interface CAMCTMCancelMomentCaptureCommand : CAMCaptureCommand

@property (readonly, nonatomic) NSString *_persistenceUUID;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPersistenceUUID:(id)a0;

@end
