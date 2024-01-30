@interface REMObjectID_Codable : REMObjectID

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithUUID:(id)a0 entityName:(id)a1;
- (id)initWithCoder:(id)a0;

@end
